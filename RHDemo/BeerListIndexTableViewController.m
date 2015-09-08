//
//  BeerListIndexTableViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/1/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "BeerListIndexTableViewController.h"
#import "BeerListTableViewController.h"
#import "LoginViewController.h"
#import "OnlineCourse.h"


@interface BeerListIndexTableViewController () {
    NSMutableArray *beerObj;
   
}
@property (strong, nonatomic) IBOutlet UITableView *beerIndexTableView;


@end

@implementation BeerListIndexTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"Categories";
    self.beerIndexTableView.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];
    self.navigationController.navigationBar.tintColor = [UIColor colorWithRed:0.69 green:0.18 blue:0.47 alpha:1];
    
    
    BeerCategory *beer;
    beerObj = [[NSMutableArray alloc]init];
    
    OnlineCourseSoapBinding *binding = [[OnlineCourse OnlineCourseSoapBinding] initWithAddress:@"http://www.softwaremerchant.com/OnlineCourse.asmx"];
    binding.logXMLInOut = YES;
    OnlineCourse_getCategories *parms = [[OnlineCourse_getCategories alloc]init];
    
    OnlineCourseSoapBindingResponse *resp = [binding getCategoriesUsingParameters:parms];
    
    
    for(id mine in resp.bodyParts) {
                if([mine isKindOfClass:[OnlineCourse_getCategoriesResponse class]]) {
                    
                    OnlineCourse_ArrayOfCategory *beerCategory = [[OnlineCourse_ArrayOfCategory alloc] init];
                    beerCategory = [mine getCategoriesResult];
                    NSMutableArray *tempBeerCategoryArray = [[NSMutableArray alloc]init];
                    tempBeerCategoryArray = beerCategory.Category;
                    for (id obj in tempBeerCategoryArray) {
                        OnlineCourse_Category *tempObj = obj;
                    
                        
                        beer = [[BeerCategory alloc]init];
                        
                        
                        beer.beerCategoryName = tempObj.CategoryName;
                        
                        [beerObj addObject:beer];
                        
                   }

        
                }
    }

//    myBeer = [[beer alloc]init];
//    myBeer.categoryName = @"First Beer Category";
//    [beerCategories addObject:myBeer];
//    
//    myBeer = [[beer alloc]init];
//    myBeer.categoryName = @"Second Beer Category";
//    [beerCategories addObject:myBeer];
//    
//    myBeer = [[beer alloc]init];
//    myBeer.categoryName = @"First Beer Category"
//    [beerCategories addObject:myBeer];
    
    
//     Uncomment the following line to preserve selection between presentations.
//     self.clearsSelectionOnViewWillAppear = NO;
//    
//     Uncomment the following line to display an Edit button in the navigation bar for this view controller.
//     self.navigationItem.rightBarButtonItem = self.editButtonItem;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {

    // Return the number of sections.
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {

    // Return the number of rows in the section.
    return beerObj.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
   
    
    // Configure the cell...
    UIImage *beerImage = [UIImage imageNamed:@"BeerImage"];
    
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"beerCategoryCell" forIndexPath:indexPath];
    //beer *current = [beerCategoriesName objectAtIndex:0];
    //cell.textLabel.text = [current categoryName];
    BeerCategory *current = [beerObj objectAtIndex:indexPath.row];
    
    [cell.imageView setImage:beerImage];
   
    cell.textLabel.text = [current beerCategoryName];
    return cell;
}

//#pragma mark -
//#pragma mark WeatherSoapBindingResponseDelegate methods
//-(void) operation: (OnlineCourseSoapBindingOperation *)operation completedWithResponse:(OnlineCourseSoapBindingResponse *)response {
//    
//    for(id mine in response.bodyParts) {
//        if([mine isKindOfClass:[OnlineCourse_getCategoriesResponse class]]) {
//            
//            //[beerCategoriesID addObject:[mine Category]];
//           
//            //[beerCategoriesName addObject:[mine CategoryName]];
//                UIAlertView *alert=[[UIAlertView alloc]initWithTitle:@"User Account Successfuly Created" message:[NSString stringWithFormat:@"hi"] delegate:self cancelButtonTitle:@"Continue" otherButtonTitles:nil];
//            [alert show];
//            
//
//        }
//    }
//}


/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    } else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath {
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/


#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
    BeerListTableViewController *bltvc = [segue destinationViewController];
    NSIndexPath *path = [self.tableView indexPathForSelectedRow];
    BeerCategory *passedObj = beerObj[path.row];
    [bltvc setBeerC:passedObj];
    
}



@end
