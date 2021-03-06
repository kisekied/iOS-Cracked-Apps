//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBTextLabelDelegate.h"

@class MocRichTextLabel, NSString, TBSNSSLLDetailBaseItem, TBSNSSLLDetailExtendItem, UIButton, UIImageView, UILabel;

@interface TBSNSSLLDetailHeaderView : UIView <TBTextLabelDelegate>
{
    _Bool _isShowView;
    UIImageView *_headerImageView;
    UIView *_titleView;
    UIImageView *_accountImageView;
    UIView *_accountCoverView;
    UILabel *_accountNameLabel;
    UILabel *_timeLabel;
    UILabel *_gotoLabel;
    UIView *_line;
    UIButton *_attentionBtn;
    MocRichTextLabel *_richTitleTextLabel;
    TBSNSSLLDetailExtendItem *_extendItem;
    TBSNSSLLDetailBaseItem *_baseItem;
}

@property(retain, nonatomic) TBSNSSLLDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(retain, nonatomic) TBSNSSLLDetailExtendItem *extendItem; // @synthesize extendItem=_extendItem;
@property(nonatomic) _Bool isShowView; // @synthesize isShowView=_isShowView;
@property(retain, nonatomic) MocRichTextLabel *richTitleTextLabel; // @synthesize richTitleTextLabel=_richTitleTextLabel;
@property(retain, nonatomic) UIButton *attentionBtn; // @synthesize attentionBtn=_attentionBtn;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *gotoLabel; // @synthesize gotoLabel=_gotoLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *accountNameLabel; // @synthesize accountNameLabel=_accountNameLabel;
@property(retain, nonatomic) UIView *accountCoverView; // @synthesize accountCoverView=_accountCoverView;
@property(retain, nonatomic) UIImageView *accountImageView; // @synthesize accountImageView=_accountImageView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void).cxx_destruct;
- (void)setAttentionBar;
- (void)layoutSubviews;
- (void)jumpToShop;
- (void)updateWithBaseItem:(id)arg1 showHeaderImageView:(_Bool)arg2;
- (void)textLabel:(id)arg1 didTapWithLink:(id)arg2 range:(struct _NSRange)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

