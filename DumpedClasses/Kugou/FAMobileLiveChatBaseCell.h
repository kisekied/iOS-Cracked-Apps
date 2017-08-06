//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FAOHAttributedLabelDelegate.h"

@class NSString, UIView;

@interface FAMobileLiveChatBaseCell : UITableViewCell <FAOHAttributedLabelDelegate>
{
    UIView *_bgView;
    double _bgWidth;
    id <FAMobileLiveChatBaseCellDelegate> _delegate;
    double _fontSize;
}

+ (id)cellStyleShadow;
+ (double)cellHeightOfMsg:(id)arg1;
+ (double)cellFontSize;
+ (double)maxWidth;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) __weak id <FAMobileLiveChatBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double bgWidth; // @synthesize bgWidth=_bgWidth;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (id)getRandomColor;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)endDismissAnimation;
- (void)beginDismissAnimation;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
