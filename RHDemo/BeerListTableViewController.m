//
//  BeerListTableViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/1/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "BeerListTableViewController.h"
#import "BeerInfoViewController.h"
#import "OnlineCourse.h"

@interface BeerListTableViewController () {

    NSMutableArray *beerCategoryObj;
   
}
@property int index, noOfRows;
@property (strong, nonatomic) IBOutlet UITableView *beerListTableView;



@end

@implementation BeerListTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    beer *beerObj;
    beerCategoryObj = [[NSMutableArray alloc]init];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
    
    
    self.title = @"Beer List";
    self.beerListTableView.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];
    
    OnlineCourseSoapBinding *binding = [[OnlineCourse OnlineCourseSoapBinding] initWithAddress:@"http://www.softwaremerchant.com/OnlineCourse.asmx"];
    binding.logXMLInOut = YES;
    OnlineCourse_getBeerList *parms = [[OnlineCourse_getBeerList alloc]init];
    
    OnlineCourseSoapBindingResponse *resp = [binding getBeerListUsingParameters:parms];
    
    for(id mine in resp.bodyParts) {
        if([mine isKindOfClass:[OnlineCourse_getBeerListResponse class]]) {
            
            OnlineCourse_ArrayOfBeer *beerArray = [[OnlineCourse_ArrayOfBeer alloc]init];
            beerArray = [mine getBeerListResult];
            NSMutableArray *tempBeerListArray = [[NSMutableArray alloc]init];
            tempBeerListArray = beerArray.Beer;
            for (int i=0; i<tempBeerListArray.count;i++) {
                OnlineCourse_Beer *beerListObj = tempBeerListArray[i];
                
                
                beerObj = [[beer alloc]init];
                beerObj.beerName = beerListObj.beer_name;
                beerObj.categoryName = beerListObj.beer_category_name;
                beerObj.beerLocation = beerListObj.beer_location;
                beerObj.beerDescription = beerListObj.beer_description;
                beerObj.beerDateAdded = beerListObj.beer_date_added;
                beerObj.beerABV = beerListObj.beer_ABV;
                beerObj.beerPrice = [NSString stringWithFormat:@"%@",beerListObj.beer_price];
                beerObj.beerSize = beerListObj.beer_size;
                
                if ([self.beerC.beerCategoryName isEqualToString:beerObj.categoryName]) {
                    
                    [beerCategoryObj addObject:beerObj];;
                }
     
                
            }
            
        }
        
    }
    
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
    return beerCategoryObj.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"beerCell" forIndexPath:indexPath];
    
    UIImage *beerImage = [UIImage imageNamed:@"BeerImage"];
    
    beer *current = [beerCategoryObj objectAtIndex:indexPath.row];
    
    [cell.imageView setImage:beerImage];
    
    cell.textLabel.text = [current beerName];
  
    return cell;
    // Configure the cell...
    
    
}


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
    
    BeerInfoViewController *bivc = [segue destinationViewController];
    NSIndexPath *path = [self.tableView indexPathForSelectedRow];
    beer *passedObj = [beerCategoryObj objectAtIndex:path.row];
    [bivc setBeerPassedObj:passedObj];
}

@end
