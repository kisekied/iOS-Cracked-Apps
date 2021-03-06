//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SDWebImageManagerDelegate-Protocol.h"

@class NSString, UIImageView;

@interface QYAdsLogoView : UIView <SDWebImageManagerDelegate>
{
    UIImageView *_imgView;
    NSString *_logoUrl;
}

@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)webImageManager:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2 forURL:(id)arg3 userInfo:(id)arg4;
- (void)loadImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withLogoURL:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

