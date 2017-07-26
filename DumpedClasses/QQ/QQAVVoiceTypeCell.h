//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QQVoiceTpyeInfo, UIColor, UIImageView, UILabel;

@interface QQAVVoiceTypeCell : UICollectionViewCell
{
    _Bool _bShowTitle;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIImageView *_selectView;
    UIImageView *_vipLabel;
    UIColor *_titleColor;
    QQVoiceTpyeInfo *_voiceTpyeInfo;
}

@property(retain, nonatomic) QQVoiceTpyeInfo *voiceTpyeInfo; // @synthesize voiceTpyeInfo=_voiceTpyeInfo;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool bShowTitle; // @synthesize bShowTitle=_bShowTitle;
@property(retain, nonatomic) UIImageView *vipLabel; // @synthesize vipLabel=_vipLabel;
@property(retain, nonatomic) UIImageView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSelectView;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
