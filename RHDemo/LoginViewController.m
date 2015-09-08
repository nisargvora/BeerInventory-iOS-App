//
//  LoginViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/1/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "LoginViewController.h"
#import "OnlineCourse.h"
#import <QuartzCore/QuartzCore.h>

@interface LoginViewController ()
@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UIButton *loginButton;
@property (weak, nonatomic) IBOutlet UIButton *signupButton;
@property (weak, nonatomic) IBOutlet UITextField *passField;
- (IBAction)loginAction:(id)sender;
- (IBAction)signupAction:(id)sender;


@end

@implementation LoginViewController {
    NSString *authString;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.nameField.layer.borderColor = [[UIColor colorWithRed:0.69 green:0.18 blue:0.47 alpha:1] CGColor];
    self.nameField.layer.borderWidth = 1.0;
    self.nameField.layer.cornerRadius = 5;
    self.passField.layer.borderColor = [[UIColor colorWithRed:0.69 green:0.18 blue:0.47 alpha:1] CGColor];
    self.passField.layer.borderWidth = 1.0;
    self.passField.layer.cornerRadius = 5;



    
    
    
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - Navigation

//
//// In a storyboard-based application, you will often want to do a little preparation before navigation
//- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
//    // Get the new view controller using [segue destinationViewController].
//    // Pass the selected object to the new view controller.
//    if([[segue identifier] isEqualToString:@"showInfo"])  {
//        [[segue destinationViewController] setDelegate:self];
//    }
//    
//}

-(void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    [self.view endEditing:YES];
}


- (IBAction)loginAction:(id)sender {
    OnlineCourseSoapBinding *binding = [[OnlineCourse OnlineCourseSoapBinding] initWithAddress:@"http://www.softwaremerchant.com/OnlineCourse.asmx"];
    
    binding.logXMLInOut = YES;
    
    OnlineCourse_IsUserValid *parms = [[OnlineCourse_IsUserValid alloc]init];
    parms.UserID = self.nameField.text;
    parms.Password = self.passField.text;
    
    [binding IsUserValidAsyncUsingParameters:parms delegate:self];
}

- (IBAction)signupAction:(id)sender {
    OnlineCourseSoapBinding *binding =  [[OnlineCourse OnlineCourseSoapBinding] initWithAddress:@"http://www.softwaremerchant.com/OnlineCourse.asmx"];
     binding.logXMLInOut = YES;
    
    OnlineCourse_CreateUserAccount *parms = [[OnlineCourse_CreateUserAccount alloc]init];
    parms.UserID = self.nameField.text;
    parms.Password = self.nameField.text;
    parms.UpdateIfExists = false;
    
    [binding CreateUserAccountAsyncUsingParameters:parms delegate:self];
    
    
}

#pragma mark -
#pragma mark WeatherSoapBindingResponseDelegate methods
-(void) operation:(OnlineCourseSoapBindingOperation *)operation completedWithResponse:(OnlineCourseSoapBindingResponse *)response {
    for(id mine in response.bodyParts) {
        if([mine isKindOfClass:[OnlineCourse_IsUserValidResponse class]]) {
            authString = [NSString stringWithFormat:@"%@",[mine IsUserValidResult]];
            if([authString isEqual:@"1"]) {
                [self performSegueWithIdentifier:@"loginSegue" sender:self];
            } else {
                UIAlertView *alert=[[UIAlertView alloc]initWithTitle:@"Authentication Failed" message:[NSString stringWithFormat:@"Incorrect Username or Password!"] delegate:self cancelButtonTitle:@"Dismiss" otherButtonTitles:nil];
                [alert show];
            }
        }
        if ([mine isKindOfClass:[OnlineCourse_CreateUserAccountResponse class]]) {
            authString = [NSString stringWithFormat:@"%@",[mine CreateUserAccountResult]];
            NSString *str = [NSString stringWithFormat:@"Created User Account for user '%@'.",self.nameField.text];
            if([authString isEqual:str]) {
                UIAlertView *alert=[[UIAlertView alloc]initWithTitle:@"User Account Successfuly Created" message:[NSString stringWithFormat:@"User is loggedin!"] delegate:self cancelButtonTitle:@"Continue" otherButtonTitles:nil];
                [alert show];
                [self performSegueWithIdentifier:@"loginSegue" sender:self];
            } else {
                UIAlertView *alert=[[UIAlertView alloc]initWithTitle:@"User Account Creation Failed" message:[NSString stringWithFormat:@"User account already exists"] delegate:self cancelButtonTitle:@"Dismiss" otherButtonTitles:nil];
                [alert show];
                
            }
        }

    }
  
}


@end
