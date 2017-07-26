//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, QLBaseViewController, QLMomentLoginAccount, QLMomentLoginOperation;

@protocol QLMomentLoginOptDelegate <NSObject>
- (void)operation:(QLMomentLoginOperation *)arg1 bindWXWithController:(QLBaseViewController *)arg2;
- (void)operation:(QLMomentLoginOperation *)arg1 bindQQWithController:(QLBaseViewController *)arg2;
- (void)operationRefreshDidSuccess:(QLMomentLoginOperation *)arg1;
- (void)operationLoginDidSuccess:(QLMomentLoginOperation *)arg1;
- (void)operation:(QLMomentLoginOperation *)arg1 requestDidFail:(NSError *)arg2 topic:(NSString *)arg3;
- (void)operationClearLoginInfo:(QLMomentLoginOperation *)arg1;
- (void)operationRevertLoginStatus:(QLMomentLoginOperation *)arg1;
- (void)operationLogOut:(QLMomentLoginOperation *)arg1;
- (void)operation:(QLMomentLoginOperation *)arg1 archiveAccountInfo:(QLMomentLoginAccount *)arg2;
- (void)operation:(QLMomentLoginOperation *)arg1 postNotificaiton:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end
