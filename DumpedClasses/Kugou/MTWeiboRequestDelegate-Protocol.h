//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString, NSURL, NSURLResponse;

@protocol MTWeiboRequestDelegate <NSObject>
- (void)request:(id)arg1 didReciveRedirectResponseWithURI:(NSURL *)arg2;
- (void)request:(id)arg1 didFinishLoadingWithDataResult:(NSData *)arg2;
- (void)request:(id)arg1 didFinishLoadingWithResult:(NSString *)arg2;
- (void)request:(id)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(id)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end
