//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIUtils : NSObject
{
}

+ (void)setHightlightStatusForView:(id)arg1 isHightligted:(_Bool)arg2 yOffset:(double)arg3;
+ (struct CGSize)getScaleImageSizeFromImage:(id)arg1 fitWidth:(double)arg2;
+ (struct CGSize)getScaleImageSizeFromImage:(id)arg1 fitHeight:(double)arg2;
+ (struct CGSize)getScaleImageSizeFromImage:(id)arg1 maxSize:(struct CGSize)arg2;
+ (id)frontViewControllerForController:(id)arg1;
+ (_Bool)isPortraitScreenForStreamRatio:(double)arg1;
+ (_Bool)isRetinaHD;
+ (_Bool)isRetina5Point5Inch;
+ (_Bool)isRetina4Point7Inch;
+ (_Bool)isRetina4Inch;
+ (_Bool)isRetina3P5Inch;
+ (id)newBlurViewWithFrame:(struct CGRect)arg1;
+ (_Bool)qlSetStatusBarStyle:(long long)arg1;
+ (_Bool)qlSetStatusBarHidden:(_Bool)arg1;
+ (_Bool)qlIsStatusBarHidden;
+ (double)getFullScreenPlayerHeight;
+ (double)getFullScreenPlayerWidth;
+ (double)getScreenScale;
+ (double)getScreenHeight;
+ (double)getScreenWidth;
+ (struct CGRect)currentScreenBounds;
+ (struct CGRect)getScreenBounds;
+ (id)createBackNavBarButton;
+ (id)createTransparentBarButton;
+ (id)createOrangeNavBarButton;
+ (id)createWhiteNavBarButton;
+ (void)initialize;

@end

