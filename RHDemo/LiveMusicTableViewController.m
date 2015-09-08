//
//  LiveMusicTableViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/6/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "LiveMusicTableViewController.h"
#import "LiveWebViewController.h"

@interface LiveMusicTableViewController () {
    NSMutableArray *events;
}
@property (strong, nonatomic) IBOutlet UITableView *liveTableView;

@end

@implementation LiveMusicTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"Featured Events";
    self.liveTableView.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];
    
    self.navigationController.navigationBar.tintColor = [UIColor colorWithRed:0.69 green:0.18 blue:0.47 alpha:1];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
    events = [[NSMutableArray alloc]init];
    NSString *event1 = @"Current Live Events";
   // NSString *event2 = @"Yelp Live Event";
    [events addObject:event1];
    //[events addObject:event2];
    

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
    return events.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"liveEventCell" forIndexPath:indexPath];
    
    cell.textLabel.text = [events objectAtIndex:indexPath.row];
    // Configure the cell...
    
    return cell;
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
    LiveWebViewController *lvvc = [segue destinationViewController];
    // Get the new view controller using [segue destinationViewController].
    NSIndexPath *path = [self.tableView indexPathForSelectedRow];
    NSString *searchObj = events[path.row];
    [lvvc searchObj];
    // Pass the selected object to the new view controller.
}


@end
