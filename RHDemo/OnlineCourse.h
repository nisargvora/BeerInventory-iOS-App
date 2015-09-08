#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class OnlineCourse_Without_x0020_DateAnswer;
@class OnlineCourse_Without_x0020_DateAnswerResponse;
@class OnlineCourse_With_x0020_DateAnswer;
@class OnlineCourse_With_x0020_DateAnswerResponse;
@class OnlineCourse_getQuestion;
@class OnlineCourse_getQuestionResponse;
@class OnlineCourse_QuestionResponse;
@class OnlineCourse_CreateUserAccount;
@class OnlineCourse_CreateUserAccountResponse;
@class OnlineCourse_IsUserValid;
@class OnlineCourse_IsUserValidResponse;
@class OnlineCourse_ForgetPassword;
@class OnlineCourse_ForgetPasswordResponse;
@class OnlineCourse_getJournal;
@class OnlineCourse_getJournalResponse;
@class OnlineCourse_ArrayOfJournal;
@class OnlineCourse_Journal;
@class OnlineCourse_saveOrder;
@class OnlineCourse_saveOrderResponse;
@class OnlineCourse_registerDeviceToken;
@class OnlineCourse_registerDeviceTokenResponse;
@class OnlineCourse_getDeviceTokensForUser;
@class OnlineCourse_getDeviceTokensForUserResponse;
@class OnlineCourse_ArrayOfDeviceToken;
@class OnlineCourse_DeviceToken;
@class OnlineCourse_getAllDeviceTokens;
@class OnlineCourse_getAllDeviceTokensResponse;
@class OnlineCourse_getRewardPointsForUser;
@class OnlineCourse_getRewardPointsForUserResponse;
@class OnlineCourse_ArrayOfRewards;
@class OnlineCourse_Rewards;
@class OnlineCourse_setRewardPointsForUser;
@class OnlineCourse_setRewardPointsForUserResponse;
@class OnlineCourse_getCategories;
@class OnlineCourse_getCategoriesResponse;
@class OnlineCourse_ArrayOfCategory;
@class OnlineCourse_Category;
@class OnlineCourse_getBeerList;
@class OnlineCourse_getBeerListResponse;
@class OnlineCourse_ArrayOfBeer;
@class OnlineCourse_Beer;
@class OnlineCourse_removeBeerFromTap;
@class OnlineCourse_removeBeerFromTapResponse;
@class OnlineCourse_addBeerToTap;
@class OnlineCourse_addBeerToTapResponse;
@class OnlineCourse_addBeer;
@class OnlineCourse_addBeerResponse;
@interface OnlineCourse_Without_x0020_DateAnswer : NSObject {
	
/* elements */
	NSString * UserID;
	NSNumber * QuestionID;
	NSString * QuestionAnswer;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_Without_x0020_DateAnswer *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSNumber * QuestionID;
@property (retain) NSString * QuestionAnswer;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_Without_x0020_DateAnswerResponse : NSObject {
	
/* elements */
	NSNumber * Without_x0020_DateAnswerResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_Without_x0020_DateAnswerResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Without_x0020_DateAnswerResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_With_x0020_DateAnswer : NSObject {
	
/* elements */
	NSString * UserID;
	NSNumber * QuestionID;
	NSString * QuestionAnswer;
	NSString * DateAnswered;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_With_x0020_DateAnswer *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSNumber * QuestionID;
@property (retain) NSString * QuestionAnswer;
@property (retain) NSString * DateAnswered;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_With_x0020_DateAnswerResponse : NSObject {
	
/* elements */
	NSNumber * With_x0020_DateAnswerResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_With_x0020_DateAnswerResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * With_x0020_DateAnswerResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getQuestion : NSObject {
	
/* elements */
	NSString * UserID;
	NSNumber * QuestionID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getQuestion *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSNumber * QuestionID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_QuestionResponse : NSObject {
	
/* elements */
	NSString * UserID;
	NSNumber * QuestionID;
	NSString * QuestionAnswer;
	NSDate * DateAnswered;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_QuestionResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSNumber * QuestionID;
@property (retain) NSString * QuestionAnswer;
@property (retain) NSDate * DateAnswered;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getQuestionResponse : NSObject {
	
/* elements */
	OnlineCourse_QuestionResponse * getQuestionResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getQuestionResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) OnlineCourse_QuestionResponse * getQuestionResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_CreateUserAccount : NSObject {
	
/* elements */
	NSString * UserID;
	NSString * Password;
	USBoolean * UpdateIfExists;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_CreateUserAccount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSString * Password;
@property (retain) USBoolean * UpdateIfExists;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_CreateUserAccountResponse : NSObject {
	
/* elements */
	NSString * CreateUserAccountResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_CreateUserAccountResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CreateUserAccountResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_IsUserValid : NSObject {
	
/* elements */
	NSString * UserID;
	NSString * Password;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_IsUserValid *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSString * Password;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_IsUserValidResponse : NSObject {
	
/* elements */
	NSNumber * IsUserValidResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_IsUserValidResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * IsUserValidResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_ForgetPassword : NSObject {
	
/* elements */
	NSString * UserID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_ForgetPassword *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_ForgetPasswordResponse : NSObject {
	
/* elements */
	NSString * ForgetPasswordResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_ForgetPasswordResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ForgetPasswordResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getJournal : NSObject {
	
/* elements */
	NSString * UserID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getJournal *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_Journal : NSObject {
	
/* elements */
	NSString * Question;
	NSString * Answer;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_Journal *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Question;
@property (retain) NSString * Answer;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_ArrayOfJournal : NSObject {
	
/* elements */
	NSMutableArray *Journal;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_ArrayOfJournal *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addJournal:(OnlineCourse_Journal *)toAdd;
@property (readonly) NSMutableArray * Journal;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getJournalResponse : NSObject {
	
/* elements */
	OnlineCourse_ArrayOfJournal * getJournalResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getJournalResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) OnlineCourse_ArrayOfJournal * getJournalResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_saveOrder : NSObject {
	
/* elements */
	NSString * UserID;
	NSString * XML;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_saveOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSString * XML;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_saveOrderResponse : NSObject {
	
/* elements */
	NSNumber * saveOrderResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_saveOrderResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * saveOrderResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_registerDeviceToken : NSObject {
	
/* elements */
	NSString * UserID;
	NSString * DeviceToken;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_registerDeviceToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSString * DeviceToken;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_registerDeviceTokenResponse : NSObject {
	
/* elements */
	NSNumber * registerDeviceTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_registerDeviceTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * registerDeviceTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getDeviceTokensForUser : NSObject {
	
/* elements */
	NSString * UserID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getDeviceTokensForUser *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_DeviceToken : NSObject {
	
/* elements */
	NSString * UserID;
	NSString * DeviceTokenName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_DeviceToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSString * DeviceTokenName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_ArrayOfDeviceToken : NSObject {
	
/* elements */
	NSMutableArray *DeviceToken;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_ArrayOfDeviceToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addDeviceToken:(OnlineCourse_DeviceToken *)toAdd;
@property (readonly) NSMutableArray * DeviceToken;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getDeviceTokensForUserResponse : NSObject {
	
/* elements */
	OnlineCourse_ArrayOfDeviceToken * getDeviceTokensForUserResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getDeviceTokensForUserResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) OnlineCourse_ArrayOfDeviceToken * getDeviceTokensForUserResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getAllDeviceTokens : NSObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getAllDeviceTokens *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getAllDeviceTokensResponse : NSObject {
	
/* elements */
	OnlineCourse_ArrayOfDeviceToken * getAllDeviceTokensResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getAllDeviceTokensResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) OnlineCourse_ArrayOfDeviceToken * getAllDeviceTokensResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getRewardPointsForUser : NSObject {
	
/* elements */
	NSString * UserID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getRewardPointsForUser *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_Rewards : NSObject {
	
/* elements */
	NSString * UserID;
	NSNumber * Rewards_Points;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_Rewards *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSNumber * Rewards_Points;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_ArrayOfRewards : NSObject {
	
/* elements */
	NSMutableArray *Rewards;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_ArrayOfRewards *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addRewards:(OnlineCourse_Rewards *)toAdd;
@property (readonly) NSMutableArray * Rewards;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getRewardPointsForUserResponse : NSObject {
	
/* elements */
	OnlineCourse_ArrayOfRewards * getRewardPointsForUserResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getRewardPointsForUserResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) OnlineCourse_ArrayOfRewards * getRewardPointsForUserResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_setRewardPointsForUser : NSObject {
	
/* elements */
	NSString * UserID;
	NSNumber * rewards_Points;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_setRewardPointsForUser *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserID;
@property (retain) NSNumber * rewards_Points;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_setRewardPointsForUserResponse : NSObject {
	
/* elements */
	NSNumber * setRewardPointsForUserResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_setRewardPointsForUserResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * setRewardPointsForUserResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getCategories : NSObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getCategories *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_Category : NSObject {
	
/* elements */
	NSString * CategoryID;
	NSString * CategoryName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_Category *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CategoryID;
@property (retain) NSString * CategoryName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_ArrayOfCategory : NSObject {
	
/* elements */
	NSMutableArray *Category;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_ArrayOfCategory *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addCategory:(OnlineCourse_Category *)toAdd;
@property (readonly) NSMutableArray * Category;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getCategoriesResponse : NSObject {
	
/* elements */
	OnlineCourse_ArrayOfCategory * getCategoriesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getCategoriesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) OnlineCourse_ArrayOfCategory * getCategoriesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getBeerList : NSObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getBeerList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_Beer : NSObject {
	
/* elements */
	NSString * beer_name;
	NSString * beer_location;
	NSString * beer_ABV;
	NSString * beer_size;
	NSNumber * beer_price;
	NSString * beer_description;
	NSString * beer_category_name;
	NSString * beer_date_added;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_Beer *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * beer_name;
@property (retain) NSString * beer_location;
@property (retain) NSString * beer_ABV;
@property (retain) NSString * beer_size;
@property (retain) NSNumber * beer_price;
@property (retain) NSString * beer_description;
@property (retain) NSString * beer_category_name;
@property (retain) NSString * beer_date_added;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_ArrayOfBeer : NSObject {
	
/* elements */
	NSMutableArray *Beer;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_ArrayOfBeer *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addBeer:(OnlineCourse_Beer *)toAdd;
@property (readonly) NSMutableArray * Beer;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_getBeerListResponse : NSObject {
	
/* elements */
	OnlineCourse_ArrayOfBeer * getBeerListResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_getBeerListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) OnlineCourse_ArrayOfBeer * getBeerListResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_removeBeerFromTap : NSObject {
	
/* elements */
	NSString * beer_name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_removeBeerFromTap *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * beer_name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_removeBeerFromTapResponse : NSObject {
	
/* elements */
	NSNumber * removeBeerFromTapResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_removeBeerFromTapResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * removeBeerFromTapResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_addBeerToTap : NSObject {
	
/* elements */
	NSString * beer_name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_addBeerToTap *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * beer_name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_addBeerToTapResponse : NSObject {
	
/* elements */
	NSNumber * addBeerToTapResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_addBeerToTapResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * addBeerToTapResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_addBeer : NSObject {
	
/* elements */
	NSString * beer_name;
	NSString * beer_location;
	NSString * beer_ABV;
	NSString * beer_size;
	NSNumber * beer_price;
	NSString * beer_description;
	NSNumber * beer_categoryID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_addBeer *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * beer_name;
@property (retain) NSString * beer_location;
@property (retain) NSString * beer_ABV;
@property (retain) NSString * beer_size;
@property (retain) NSNumber * beer_price;
@property (retain) NSString * beer_description;
@property (retain) NSNumber * beer_categoryID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface OnlineCourse_addBeerResponse : NSObject {
	
/* elements */
	NSNumber * addBeerResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (OnlineCourse_addBeerResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * addBeerResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "OnlineCourse.h"
@class OnlineCourseSoapBinding;
@class OnlineCourseSoap12Binding;
@interface OnlineCourse : NSObject {
	
}
+ (OnlineCourseSoapBinding *)OnlineCourseSoapBinding;
+ (OnlineCourseSoap12Binding *)OnlineCourseSoap12Binding;
@end
@class OnlineCourseSoapBindingResponse;
@class OnlineCourseSoapBindingOperation;
@protocol OnlineCourseSoapBindingResponseDelegate <NSObject>
- (void) operation:(OnlineCourseSoapBindingOperation *)operation completedWithResponse:(OnlineCourseSoapBindingResponse *)response;
@end
@interface OnlineCourseSoapBinding : NSObject <OnlineCourseSoapBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(OnlineCourseSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (OnlineCourseSoapBindingResponse *)saveQuestionUsingParameters:(OnlineCourse_With_x0020_DateAnswer *)aParameters ;
- (void)saveQuestionAsyncUsingParameters:(OnlineCourse_With_x0020_DateAnswer *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)getQuestionUsingParameters:(OnlineCourse_getQuestion *)aParameters ;
- (void)getQuestionAsyncUsingParameters:(OnlineCourse_getQuestion *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)CreateUserAccountUsingParameters:(OnlineCourse_CreateUserAccount *)aParameters ;
- (void)CreateUserAccountAsyncUsingParameters:(OnlineCourse_CreateUserAccount *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)IsUserValidUsingParameters:(OnlineCourse_IsUserValid *)aParameters ;
- (void)IsUserValidAsyncUsingParameters:(OnlineCourse_IsUserValid *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)ForgetPasswordUsingParameters:(OnlineCourse_ForgetPassword *)aParameters ;
- (void)ForgetPasswordAsyncUsingParameters:(OnlineCourse_ForgetPassword *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)getJournalUsingParameters:(OnlineCourse_getJournal *)aParameters ;
- (void)getJournalAsyncUsingParameters:(OnlineCourse_getJournal *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)saveOrderUsingParameters:(OnlineCourse_saveOrder *)aParameters ;
- (void)saveOrderAsyncUsingParameters:(OnlineCourse_saveOrder *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)registerDeviceTokenUsingParameters:(OnlineCourse_registerDeviceToken *)aParameters ;
- (void)registerDeviceTokenAsyncUsingParameters:(OnlineCourse_registerDeviceToken *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)getDeviceTokensForUserUsingParameters:(OnlineCourse_getDeviceTokensForUser *)aParameters ;
- (void)getDeviceTokensForUserAsyncUsingParameters:(OnlineCourse_getDeviceTokensForUser *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)getAllDeviceTokensUsingParameters:(OnlineCourse_getAllDeviceTokens *)aParameters ;
- (void)getAllDeviceTokensAsyncUsingParameters:(OnlineCourse_getAllDeviceTokens *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)getRewardPointsForUserUsingParameters:(OnlineCourse_getRewardPointsForUser *)aParameters ;
- (void)getRewardPointsForUserAsyncUsingParameters:(OnlineCourse_getRewardPointsForUser *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)setRewardPointsForUserUsingParameters:(OnlineCourse_setRewardPointsForUser *)aParameters ;
- (void)setRewardPointsForUserAsyncUsingParameters:(OnlineCourse_setRewardPointsForUser *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)getCategoriesUsingParameters:(OnlineCourse_getCategories *)aParameters ;
- (void)getCategoriesAsyncUsingParameters:(OnlineCourse_getCategories *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)getBeerListUsingParameters:(OnlineCourse_getBeerList *)aParameters ;
- (void)getBeerListAsyncUsingParameters:(OnlineCourse_getBeerList *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)removeBeerFromTapUsingParameters:(OnlineCourse_removeBeerFromTap *)aParameters ;
- (void)removeBeerFromTapAsyncUsingParameters:(OnlineCourse_removeBeerFromTap *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)addBeerToTapUsingParameters:(OnlineCourse_addBeerToTap *)aParameters ;
- (void)addBeerToTapAsyncUsingParameters:(OnlineCourse_addBeerToTap *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoapBindingResponse *)addBeerUsingParameters:(OnlineCourse_addBeer *)aParameters ;
- (void)addBeerAsyncUsingParameters:(OnlineCourse_addBeer *)aParameters  delegate:(id<OnlineCourseSoapBindingResponseDelegate>)responseDelegate;
@end
@interface OnlineCourseSoapBindingOperation : NSOperation {
	OnlineCourseSoapBinding *binding;
	OnlineCourseSoapBindingResponse *response;
	id<OnlineCourseSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) OnlineCourseSoapBinding *binding;
@property (readonly) OnlineCourseSoapBindingResponse *response;
@property (nonatomic, assign) id<OnlineCourseSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate;
@end
@interface OnlineCourseSoapBinding_saveQuestion : OnlineCourseSoapBindingOperation {
	OnlineCourse_With_x0020_DateAnswer * parameters;
}
@property (retain) OnlineCourse_With_x0020_DateAnswer * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_With_x0020_DateAnswer *)aParameters
;
@end
@interface OnlineCourseSoapBinding_getQuestion : OnlineCourseSoapBindingOperation {
	OnlineCourse_getQuestion * parameters;
}
@property (retain) OnlineCourse_getQuestion * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getQuestion *)aParameters
;
@end
@interface OnlineCourseSoapBinding_CreateUserAccount : OnlineCourseSoapBindingOperation {
	OnlineCourse_CreateUserAccount * parameters;
}
@property (retain) OnlineCourse_CreateUserAccount * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_CreateUserAccount *)aParameters
;
@end
@interface OnlineCourseSoapBinding_IsUserValid : OnlineCourseSoapBindingOperation {
	OnlineCourse_IsUserValid * parameters;
}
@property (retain) OnlineCourse_IsUserValid * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_IsUserValid *)aParameters
;
@end
@interface OnlineCourseSoapBinding_ForgetPassword : OnlineCourseSoapBindingOperation {
	OnlineCourse_ForgetPassword * parameters;
}
@property (retain) OnlineCourse_ForgetPassword * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_ForgetPassword *)aParameters
;
@end
@interface OnlineCourseSoapBinding_getJournal : OnlineCourseSoapBindingOperation {
	OnlineCourse_getJournal * parameters;
}
@property (retain) OnlineCourse_getJournal * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getJournal *)aParameters
;
@end
@interface OnlineCourseSoapBinding_saveOrder : OnlineCourseSoapBindingOperation {
	OnlineCourse_saveOrder * parameters;
}
@property (retain) OnlineCourse_saveOrder * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_saveOrder *)aParameters
;
@end
@interface OnlineCourseSoapBinding_registerDeviceToken : OnlineCourseSoapBindingOperation {
	OnlineCourse_registerDeviceToken * parameters;
}
@property (retain) OnlineCourse_registerDeviceToken * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_registerDeviceToken *)aParameters
;
@end
@interface OnlineCourseSoapBinding_getDeviceTokensForUser : OnlineCourseSoapBindingOperation {
	OnlineCourse_getDeviceTokensForUser * parameters;
}
@property (retain) OnlineCourse_getDeviceTokensForUser * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getDeviceTokensForUser *)aParameters
;
@end
@interface OnlineCourseSoapBinding_getAllDeviceTokens : OnlineCourseSoapBindingOperation {
	OnlineCourse_getAllDeviceTokens * parameters;
}
@property (retain) OnlineCourse_getAllDeviceTokens * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getAllDeviceTokens *)aParameters
;
@end
@interface OnlineCourseSoapBinding_getRewardPointsForUser : OnlineCourseSoapBindingOperation {
	OnlineCourse_getRewardPointsForUser * parameters;
}
@property (retain) OnlineCourse_getRewardPointsForUser * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getRewardPointsForUser *)aParameters
;
@end
@interface OnlineCourseSoapBinding_setRewardPointsForUser : OnlineCourseSoapBindingOperation {
	OnlineCourse_setRewardPointsForUser * parameters;
}
@property (retain) OnlineCourse_setRewardPointsForUser * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_setRewardPointsForUser *)aParameters
;
@end
@interface OnlineCourseSoapBinding_getCategories : OnlineCourseSoapBindingOperation {
	OnlineCourse_getCategories * parameters;
}
@property (retain) OnlineCourse_getCategories * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getCategories *)aParameters
;
@end
@interface OnlineCourseSoapBinding_getBeerList : OnlineCourseSoapBindingOperation {
	OnlineCourse_getBeerList * parameters;
}
@property (retain) OnlineCourse_getBeerList * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getBeerList *)aParameters
;
@end
@interface OnlineCourseSoapBinding_removeBeerFromTap : OnlineCourseSoapBindingOperation {
	OnlineCourse_removeBeerFromTap * parameters;
}
@property (retain) OnlineCourse_removeBeerFromTap * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_removeBeerFromTap *)aParameters
;
@end
@interface OnlineCourseSoapBinding_addBeerToTap : OnlineCourseSoapBindingOperation {
	OnlineCourse_addBeerToTap * parameters;
}
@property (retain) OnlineCourse_addBeerToTap * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_addBeerToTap *)aParameters
;
@end
@interface OnlineCourseSoapBinding_addBeer : OnlineCourseSoapBindingOperation {
	OnlineCourse_addBeer * parameters;
}
@property (retain) OnlineCourse_addBeer * parameters;
- (id)initWithBinding:(OnlineCourseSoapBinding *)aBinding delegate:(id<OnlineCourseSoapBindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_addBeer *)aParameters
;
@end
@interface OnlineCourseSoapBinding_envelope : NSObject {
}
+ (OnlineCourseSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface OnlineCourseSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
@class OnlineCourseSoap12BindingResponse;
@class OnlineCourseSoap12BindingOperation;
@protocol OnlineCourseSoap12BindingResponseDelegate <NSObject>
- (void) operation:(OnlineCourseSoap12BindingOperation *)operation completedWithResponse:(OnlineCourseSoap12BindingResponse *)response;
@end
@interface OnlineCourseSoap12Binding : NSObject <OnlineCourseSoap12BindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(OnlineCourseSoap12BindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (OnlineCourseSoap12BindingResponse *)saveQuestionUsingParameters:(OnlineCourse_With_x0020_DateAnswer *)aParameters ;
- (void)saveQuestionAsyncUsingParameters:(OnlineCourse_With_x0020_DateAnswer *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)getQuestionUsingParameters:(OnlineCourse_getQuestion *)aParameters ;
- (void)getQuestionAsyncUsingParameters:(OnlineCourse_getQuestion *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)CreateUserAccountUsingParameters:(OnlineCourse_CreateUserAccount *)aParameters ;
- (void)CreateUserAccountAsyncUsingParameters:(OnlineCourse_CreateUserAccount *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)IsUserValidUsingParameters:(OnlineCourse_IsUserValid *)aParameters ;
- (void)IsUserValidAsyncUsingParameters:(OnlineCourse_IsUserValid *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)ForgetPasswordUsingParameters:(OnlineCourse_ForgetPassword *)aParameters ;
- (void)ForgetPasswordAsyncUsingParameters:(OnlineCourse_ForgetPassword *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)getJournalUsingParameters:(OnlineCourse_getJournal *)aParameters ;
- (void)getJournalAsyncUsingParameters:(OnlineCourse_getJournal *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)saveOrderUsingParameters:(OnlineCourse_saveOrder *)aParameters ;
- (void)saveOrderAsyncUsingParameters:(OnlineCourse_saveOrder *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)registerDeviceTokenUsingParameters:(OnlineCourse_registerDeviceToken *)aParameters ;
- (void)registerDeviceTokenAsyncUsingParameters:(OnlineCourse_registerDeviceToken *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)getDeviceTokensForUserUsingParameters:(OnlineCourse_getDeviceTokensForUser *)aParameters ;
- (void)getDeviceTokensForUserAsyncUsingParameters:(OnlineCourse_getDeviceTokensForUser *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)getAllDeviceTokensUsingParameters:(OnlineCourse_getAllDeviceTokens *)aParameters ;
- (void)getAllDeviceTokensAsyncUsingParameters:(OnlineCourse_getAllDeviceTokens *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)getRewardPointsForUserUsingParameters:(OnlineCourse_getRewardPointsForUser *)aParameters ;
- (void)getRewardPointsForUserAsyncUsingParameters:(OnlineCourse_getRewardPointsForUser *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)setRewardPointsForUserUsingParameters:(OnlineCourse_setRewardPointsForUser *)aParameters ;
- (void)setRewardPointsForUserAsyncUsingParameters:(OnlineCourse_setRewardPointsForUser *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)getCategoriesUsingParameters:(OnlineCourse_getCategories *)aParameters ;
- (void)getCategoriesAsyncUsingParameters:(OnlineCourse_getCategories *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)getBeerListUsingParameters:(OnlineCourse_getBeerList *)aParameters ;
- (void)getBeerListAsyncUsingParameters:(OnlineCourse_getBeerList *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)removeBeerFromTapUsingParameters:(OnlineCourse_removeBeerFromTap *)aParameters ;
- (void)removeBeerFromTapAsyncUsingParameters:(OnlineCourse_removeBeerFromTap *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)addBeerToTapUsingParameters:(OnlineCourse_addBeerToTap *)aParameters ;
- (void)addBeerToTapAsyncUsingParameters:(OnlineCourse_addBeerToTap *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
- (OnlineCourseSoap12BindingResponse *)addBeerUsingParameters:(OnlineCourse_addBeer *)aParameters ;
- (void)addBeerAsyncUsingParameters:(OnlineCourse_addBeer *)aParameters  delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)responseDelegate;
@end
@interface OnlineCourseSoap12BindingOperation : NSOperation {
	OnlineCourseSoap12Binding *binding;
	OnlineCourseSoap12BindingResponse *response;
	id<OnlineCourseSoap12BindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) OnlineCourseSoap12Binding *binding;
@property (readonly) OnlineCourseSoap12BindingResponse *response;
@property (nonatomic, assign) id<OnlineCourseSoap12BindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate;
@end
@interface OnlineCourseSoap12Binding_saveQuestion : OnlineCourseSoap12BindingOperation {
	OnlineCourse_With_x0020_DateAnswer * parameters;
}
@property (retain) OnlineCourse_With_x0020_DateAnswer * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_With_x0020_DateAnswer *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_getQuestion : OnlineCourseSoap12BindingOperation {
	OnlineCourse_getQuestion * parameters;
}
@property (retain) OnlineCourse_getQuestion * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getQuestion *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_CreateUserAccount : OnlineCourseSoap12BindingOperation {
	OnlineCourse_CreateUserAccount * parameters;
}
@property (retain) OnlineCourse_CreateUserAccount * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_CreateUserAccount *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_IsUserValid : OnlineCourseSoap12BindingOperation {
	OnlineCourse_IsUserValid * parameters;
}
@property (retain) OnlineCourse_IsUserValid * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_IsUserValid *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_ForgetPassword : OnlineCourseSoap12BindingOperation {
	OnlineCourse_ForgetPassword * parameters;
}
@property (retain) OnlineCourse_ForgetPassword * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_ForgetPassword *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_getJournal : OnlineCourseSoap12BindingOperation {
	OnlineCourse_getJournal * parameters;
}
@property (retain) OnlineCourse_getJournal * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getJournal *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_saveOrder : OnlineCourseSoap12BindingOperation {
	OnlineCourse_saveOrder * parameters;
}
@property (retain) OnlineCourse_saveOrder * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_saveOrder *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_registerDeviceToken : OnlineCourseSoap12BindingOperation {
	OnlineCourse_registerDeviceToken * parameters;
}
@property (retain) OnlineCourse_registerDeviceToken * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_registerDeviceToken *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_getDeviceTokensForUser : OnlineCourseSoap12BindingOperation {
	OnlineCourse_getDeviceTokensForUser * parameters;
}
@property (retain) OnlineCourse_getDeviceTokensForUser * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getDeviceTokensForUser *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_getAllDeviceTokens : OnlineCourseSoap12BindingOperation {
	OnlineCourse_getAllDeviceTokens * parameters;
}
@property (retain) OnlineCourse_getAllDeviceTokens * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getAllDeviceTokens *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_getRewardPointsForUser : OnlineCourseSoap12BindingOperation {
	OnlineCourse_getRewardPointsForUser * parameters;
}
@property (retain) OnlineCourse_getRewardPointsForUser * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getRewardPointsForUser *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_setRewardPointsForUser : OnlineCourseSoap12BindingOperation {
	OnlineCourse_setRewardPointsForUser * parameters;
}
@property (retain) OnlineCourse_setRewardPointsForUser * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_setRewardPointsForUser *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_getCategories : OnlineCourseSoap12BindingOperation {
	OnlineCourse_getCategories * parameters;
}
@property (retain) OnlineCourse_getCategories * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getCategories *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_getBeerList : OnlineCourseSoap12BindingOperation {
	OnlineCourse_getBeerList * parameters;
}
@property (retain) OnlineCourse_getBeerList * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_getBeerList *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_removeBeerFromTap : OnlineCourseSoap12BindingOperation {
	OnlineCourse_removeBeerFromTap * parameters;
}
@property (retain) OnlineCourse_removeBeerFromTap * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_removeBeerFromTap *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_addBeerToTap : OnlineCourseSoap12BindingOperation {
	OnlineCourse_addBeerToTap * parameters;
}
@property (retain) OnlineCourse_addBeerToTap * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_addBeerToTap *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_addBeer : OnlineCourseSoap12BindingOperation {
	OnlineCourse_addBeer * parameters;
}
@property (retain) OnlineCourse_addBeer * parameters;
- (id)initWithBinding:(OnlineCourseSoap12Binding *)aBinding delegate:(id<OnlineCourseSoap12BindingResponseDelegate>)aDelegate
	parameters:(OnlineCourse_addBeer *)aParameters
;
@end
@interface OnlineCourseSoap12Binding_envelope : NSObject {
}
+ (OnlineCourseSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface OnlineCourseSoap12BindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
