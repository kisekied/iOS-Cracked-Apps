//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTProtocol.h"

@class NSArray, NSString, UIImage, UIView;

@protocol MTSharerProtocol <MTProtocol>
@property(readonly, nonatomic) NSArray *items;
@property(nonatomic) long long tag;
- (void)dismiss;
- (void)showInView:(UIView *)arg1;
- (void)shareWithItem:(id)arg1;
- (UIImage *)getShareInfoImgIcon;
- (void)setShareInfoTryListenUrl:(NSString *)arg1;
- (void)setShareInfoSingerName:(NSString *)arg1;
- (void)setShareInfoImgIcon:(UIImage *)arg1;
- (void)setShareInfoImgIconUrl:(NSString *)arg1;
- (void)setShareExtendModel:(id)arg1;
- (void)setShareModel:(id)arg1;
- (void)setShareHideScreenShot:(_Bool)arg1;
- (void)setSharerTitle:(NSString *)arg1;
- (void)setSharerType:(long long)arg1;
@end

