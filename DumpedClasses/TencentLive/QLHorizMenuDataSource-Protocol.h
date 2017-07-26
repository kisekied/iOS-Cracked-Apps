//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLHorizMenuView, UIColor, UIFont;

@protocol QLHorizMenuDataSource <NSObject>
- (NSString *)horizMenu:(QLHorizMenuView *)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(QLHorizMenuView *)arg1;
- (UIColor *)backgroundColorForMenu:(QLHorizMenuView *)arg1;

@optional
- (double)btnNaviMaskBottomGapHeight:(QLHorizMenuView *)arg1;
- (UIFont *)buttonFontForHorizMenu:(QLHorizMenuView *)arg1;
@end
