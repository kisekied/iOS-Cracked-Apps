//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface AUActionSheetManager : NSObject
{
    _Bool _backGroundMode;
    NSHashTable *_showedElements;
}

+ (id)sharedAUActionSheetManager;
@property(retain, nonatomic) NSHashTable *showedElements; // @synthesize showedElements=_showedElements;
@property(nonatomic) _Bool backGroundMode; // @synthesize backGroundMode=_backGroundMode;
- (void).cxx_destruct;
- (void)addToShowedPool:(id)arg1;
- (void)dismissAllUIActionSheet;
- (id)init;

@end
