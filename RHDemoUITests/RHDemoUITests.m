//
//  RHDemoUITests.m
//  RHDemoUITests
//
//  Created by Nisarg Vora on 10/1/15.
//  Copyright © 2015 Nisarg Vora. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface RHDemoUITests : XCTestCase

@end

@implementation RHDemoUITests

- (void)setUp {
    [super setUp];
    
    // Put setup code here. This method is called before the invocation of each test method in the class.
    
    // In UI tests it is usually best to stop immediately when a failure occurs.
    self.continueAfterFailure = NO;
    // UI tests must launch the application that they test. Doing this in setup will make sure it happens for each test method.
    [[[XCUIApplication alloc] init] launch];
    
    // In UI tests it’s important to set the initial state - such as interface orientation - required for your tests before they run. The setUp method is a good place to do this.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    // Use recording to get started writing UI tests.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    
    XCUIApplication *app = [[XCUIApplication alloc] init];
    XCUIElement *enterYourUsernameTextField = app.textFields[@"Enter your Username"];
    [enterYourUsernameTextField tap];
    [enterYourUsernameTextField typeText:@"admin"];
    
    XCUIElement *enterYourPasswordSecureTextField = app.secureTextFields[@"Enter your password"];
    [enterYourPasswordSecureTextField tap];
    [enterYourPasswordSecureTextField typeText:@"peanut"];
    [app.buttons[@"Login"] tap];
    
    XCUIElementQuery *tablesQuery = app.tables;
    [tablesQuery.staticTexts[@"Imperial IPA"] tap];
    [tablesQuery.staticTexts[@"Six Point Resin"] tap];
    [app.navigationBars[@"Beer Info"].buttons[@"Beer List"] tap];
    [app.navigationBars[@"Beer List"].buttons[@"Categories"] tap];
    
    XCUIElementQuery *tabBarsQuery = app.tabBars;
    [tabBarsQuery.buttons[@"Location"] tap];
    [tabBarsQuery.buttons[@"Barcode"] tap];
    [tabBarsQuery.buttons[@"Featured"] tap];
    [tablesQuery.staticTexts[@"Current Live Events"] tap];
    [[[[[[[[[[[[[[[app childrenMatchingType:XCUIElementTypeWindow] elementBoundByIndex:0] childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther] elementBoundByIndex:1] childrenMatchingType:XCUIElementTypeOther].element childrenMatchingType:XCUIElementTypeOther].element tap];
    [app.navigationBars[@"Featured Events"].buttons[@"Featured Events"] tap];
    
    
}

@end
