//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "SSPGCActionManagerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class ExploreSearchViewController, NSArray, NSString, SSPGCActionManager, SSThemedButton, SSThemedLabel, SSThemedTextView, SSThemedView, TTGroupModel, UIView, WDReadQualityModel;

@interface WDWriteCommentView : SSViewBase <UITextViewDelegate, UIGestureRecognizerDelegate, SSPGCActionManagerDelegate>
{
    long long _defaultTextPosition;
    _Bool didBeginToComment;
    _Bool _isEssay;
    _Bool _hasRemovedFromWindow;
    _Bool _hasImage;
    _Bool _sending;
    _Bool _isSharePGCUser;
    _Bool _isDismiss;
    SSThemedTextView *_textView;
    UIView *_backgroundView;
    SSThemedView *_commentView;
    ExploreSearchViewController *_chooseViewController;
    id <WDWriteCommentViewDelegate> _delegate;
    WDReadQualityModel *_readQuality;
    UIView *_inputBackgroundView;
    UIView *_shareBarView;
    SSThemedLabel *_tipLabel;
    NSArray *_sharePlatformArray;
    SSThemedButton *_publishButton;
    SSThemedButton *_recommendToFansCheckButton;
    SSThemedLabel *_recommendHintLabel;
    TTGroupModel *_groupModel;
    NSString *_mediaID;
    NSString *_itemTag;
    NSString *_replyToCommentID;
    NSString *_adID;
    SSPGCActionManager *_pgcActionManager;
    id <TTCommentModelProtocol> _replyCommentModel;
}

+ (struct CGRect)frameForCommentInputView;
@property(retain, nonatomic) id <TTCommentModelProtocol> replyCommentModel; // @synthesize replyCommentModel=_replyCommentModel;
@property(nonatomic) _Bool isDismiss; // @synthesize isDismiss=_isDismiss;
@property(retain, nonatomic) SSPGCActionManager *pgcActionManager; // @synthesize pgcActionManager=_pgcActionManager;
@property(nonatomic) _Bool isSharePGCUser; // @synthesize isSharePGCUser=_isSharePGCUser;
@property(nonatomic, getter=isSending) _Bool sending; // @synthesize sending=_sending;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *replyToCommentID; // @synthesize replyToCommentID=_replyToCommentID;
@property(copy, nonatomic) NSString *itemTag; // @synthesize itemTag=_itemTag;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) SSThemedLabel *recommendHintLabel; // @synthesize recommendHintLabel=_recommendHintLabel;
@property(retain, nonatomic) SSThemedButton *recommendToFansCheckButton; // @synthesize recommendToFansCheckButton=_recommendToFansCheckButton;
@property(nonatomic) _Bool hasRemovedFromWindow; // @synthesize hasRemovedFromWindow=_hasRemovedFromWindow;
@property(retain, nonatomic) SSThemedButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) NSArray *sharePlatformArray; // @synthesize sharePlatformArray=_sharePlatformArray;
@property(retain, nonatomic) SSThemedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *shareBarView; // @synthesize shareBarView=_shareBarView;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) WDReadQualityModel *readQuality; // @synthesize readQuality=_readQuality;
@property(nonatomic) _Bool isEssay; // @synthesize isEssay=_isEssay;
@property(nonatomic) __weak id <WDWriteCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ExploreSearchViewController *chooseViewController; // @synthesize chooseViewController=_chooseViewController;
@property(retain, nonatomic) SSThemedView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SSThemedTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)actionManager:(id)arg1 shareUserFinished:(id)arg2;
- (void)setCondition:(id)arg1;
- (void)showContentTooLongTip;
- (void)showIndicatorMsg:(id)arg1 imageName:(id)arg2;
- (void)showWrongImgIndicatorWithMsg:(id)arg1;
- (void)showRightImgIndicatorWithMsg:(id)arg1;
- (void)publishActionFired:(id)arg1;
- (void)fakePan;
- (void)backgroundTapActionFired:(id)arg1;
- (id)replyTextReplyContent:(id)arg1;
- (void)reset;
- (void)recommendToFansCheckButtonClicked:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (id)shouldShowedInViewControllerForView:(id)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2 resetCommentViewFrame:(_Bool)arg3;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)themeChanged:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (id)displayWithAccountInfo:(id)arg1;
- (void)platformButtonActionFired:(id)arg1;
- (void)reloadPlatfomButtonState;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
