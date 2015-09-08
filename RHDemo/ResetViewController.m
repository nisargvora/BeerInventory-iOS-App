//
//  ResetViewController.m
//  RHDemo
//
//  Created by Nisarg Vora on 9/1/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import "ResetViewController.h"
#import "OnlineCourse.h"

@interface ResetViewController ()
@property (weak, nonatomic) IBOutlet UITextField *nameField;
- (IBAction)resetPassAction:(id)sender;

@end

@implementation ResetViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
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

- (IBAction)resetPassAction:(id)sender {
    OnlineCourseSoapBinding *binding = [[OnlineCourse OnlineCourseSoapBinding] initWithAddress:@"http://www.softwaremerchant.com/OnlineCourse.asmx"];
    
    binding.logXMLInOut = YES;
    
    OnlineCourse_ForgetPassword *parms = [[OnlineCourse_ForgetPassword alloc]init];
    parms.UserID = self.nameField.text;
    [binding ForgetPasswordAsyncUsingParameters:parms delegate:self];
   
    
}

#pragma mark -
#pragma mark WeatherSoapBindingResponseDelegate methods
-(void) operation:(OnlineCourseSoapBindingOperation *)operation completedWithResponse:(OnlineCourseSoapBindingResponse *)response {
    for(id mine in response.bodyParts) {
        if([mine isKindOfClass:[OnlineCourse_ForgetPasswordResponse class]]) {
            NSString *str = [NSString stringWithFormat:@"%@",[mine ForgetPasswordResult]];
            if([str rangeOfString:@"Temp Password:"].location == NSNotFound) {
                UIAlertView *alert=[[UIAlertView alloc]initWithTitle:@"Could not generate temp. password" message:[NSString stringWithFormat:@"User account does not exist."] delegate:self cancelButtonTitle:@"Dismiss" otherButtonTitles:nil];
                [alert show];
                
            } else {
                UIAlertView *alert=[[UIAlertView alloc]initWithTitle:@"Temp. password successfully generated" message:[NSString stringWithFormat:@"%@",[mine ForgetPasswordResult]] delegate:self cancelButtonTitle:@"Continue" otherButtonTitles:nil];
                [alert show];
                [self performSegueWithIdentifier:@"backToLoginSegue" sender:self];
                
            }
        }
        
        
    }
    
}




@end
