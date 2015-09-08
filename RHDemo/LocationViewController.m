//
//  LocationViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/6/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "LocationViewController.h"
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "MapPin.h"


@interface LocationViewController () 
@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end

@implementation LocationViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self.mapView setZoomEnabled:YES];
    [self.mapView setScrollEnabled:YES];
    
    MKCoordinateRegion region = {{0.0,0.0 }, {0.0,0.0 }};
    region.center.latitude = 38.978203;
    region.center.longitude = -76.494539;
    region.span.latitudeDelta = 0.01f;
    region.span.longitudeDelta = 0.01f;
    
    [self.mapView setRegion:region animated:YES];
    
    MapPin *mapPin = [[MapPin alloc]init];
    mapPin.title = @"The Rams Head Group ";
    mapPin.subTitle = @"Old school tavern for pub grub & seafood";
    mapPin.coordinate = region.center;
    [self.mapView addAnnotation:mapPin];
 
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
