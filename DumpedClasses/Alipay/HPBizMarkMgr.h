//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface HPBizMarkMgr : NSObject
{
    NSDictionary *_bizMarkDic;
    _Bool _firstSinceLanuch;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)reportClickForWidgetId:(id)arg1;
- (void)doUpdateMoreBizMark:(CDUnknownBlockType)arg1 coldLaunch:(_Bool)arg2;
- (id)bizMarkModelForWidgetId:(id)arg1;
- (void)setMarkData:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)saveCache:(id)arg1;
- (void)resetCache;
- (id)init;

@end
