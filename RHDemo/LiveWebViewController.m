//
//  LiveWebViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/6/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "LiveWebViewController.h"

@interface LiveWebViewController ()
@property (weak, nonatomic) IBOutlet UIWebView *liveWebView;

@end

@implementation LiveWebViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self invokeView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)invokeView {
    // Update the user interface for the detail item.
    NSURL *url;
    //if([self.searchObj isEqualToString:@"Yelp Live Event"]){
    //    url = [NSURL URLWithString:@"http://www.yelp.com/"];
    //}else if([self.searchObj isEqualToString:@"Google Live Event"]){
        url = [NSURL URLWithString:@"http://www.ramsheadlive.com/"];
   // }
    
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [self.liveWebView loadRequest:request];
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
