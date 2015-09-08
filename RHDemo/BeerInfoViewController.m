//
//  BeerInfoViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/8/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "BeerInfoViewController.h"

@interface BeerInfoViewController ()
@property (weak, nonatomic) IBOutlet UILabel *nameField;
@property (weak, nonatomic) IBOutlet UILabel *locationField;
@property (weak, nonatomic) IBOutlet UILabel *abvField;
@property (weak, nonatomic) IBOutlet UILabel *sizeField;
@property (weak, nonatomic) IBOutlet UILabel *priceField;
@property (weak, nonatomic) IBOutlet UILabel *categoryField;
@property (weak, nonatomic) IBOutlet UILabel *dateField;
@property (weak, nonatomic) IBOutlet UITextView *descriptionView;

@end

@implementation BeerInfoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"Beer Info";
    self.nameField.text = self.beerPassedObj.beerName;
    self.locationField.text = self.beerPassedObj.beerLocation;
    self.abvField.text = self.beerPassedObj.beerABV;
    self.sizeField.text = self.beerPassedObj.beerSize;
    self.priceField.text = self.beerPassedObj.beerPrice;
    self.categoryField.text = self.beerPassedObj.categoryName;
    self.dateField.text = self.beerPassedObj.beerDateAdded;
    self.descriptionView.text = self.beerPassedObj.beerDescription;
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
