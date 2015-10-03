//
//  RHDemoTests.m
//  RHDemoTests
//
//  Created by Nisarg Vora on 9/5/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "LoginViewController.h"

@interface RHDemoTests : XCTestCase

@end

@implementation RHDemoTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {

    XCTAssert(YES, @"Pass");
}

-(void)testUserLogin {
    
    XCTAssert(YES,@"This this a failed test");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
