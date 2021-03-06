//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TTActionSheetModel;

@interface TTActionSheetManager : NSObject
{
    TTActionSheetModel *_dislikeModel;
    TTActionSheetModel *_reportModel;
    NSString *_criticismInput;
    NSString *_source;
    NSNumber *_adID;
}

@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *criticismInput; // @synthesize criticismInput=_criticismInput;
@property(retain, nonatomic) TTActionSheetModel *reportModel; // @synthesize reportModel=_reportModel;
@property(retain, nonatomic) TTActionSheetModel *dislikeModel; // @synthesize dislikeModel=_dislikeModel;
- (void).cxx_destruct;
- (void)resetManager;
- (void)addActionSheetMode:(id)arg1;
- (id)init;

@end

