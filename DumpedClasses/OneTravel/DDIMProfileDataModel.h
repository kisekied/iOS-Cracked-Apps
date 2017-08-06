//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDIMProfileActivityModel, DDIMProfileUserModel, NSMutableArray, NSString;

@interface DDIMProfileDataModel : NSObject
{
    DDIMProfileUserModel *_userModel;
    DDIMProfileActivityModel *_activityModel;
    NSString *_historyTitle;
    NSMutableArray *_historyMsgArray;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSMutableArray *historyMsgArray; // @synthesize historyMsgArray=_historyMsgArray;
@property(retain, nonatomic) NSString *historyTitle; // @synthesize historyTitle=_historyTitle;
@property(retain, nonatomic) DDIMProfileActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(retain, nonatomic) DDIMProfileUserModel *userModel; // @synthesize userModel=_userModel;
- (void).cxx_destruct;
- (void)getProfileDataWithCallback:(CDUnknownBlockType)arg1;
- (void)getLocalProfileDataWithCallback:(CDUnknownBlockType)arg1;
- (void)setNewModelWithinfoDict:(id)arg1;
- (id)initWithUserId:(id)arg1;

@end
