//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTFeedbackCommitViewDelegate.h"
#import "CTFeedbackDrawViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CTFeedbackDrawView, CTFeedbackGuidingView, CTFeedbackQRCodeView, NSArray, NSLayoutConstraint, NSString, UIAlertView, UIButton, UIImage, UIImageView, UILabel, UIPinchGestureRecognizer;

@interface CTFeedbackEditView : UIView <UIGestureRecognizerDelegate, CTFeedbackCommitViewDelegate, CTFeedbackDrawViewDelegate, UIAlertViewDelegate>
{
    _Bool canEdit;
    UIImage *_sourceImage;
    UIImageView *_bkImageView;
    UIImageView *_youyouhandImageView;
    UIImageView *_youyouheadImageView;
    NSString *_currentCustomerServiceURL;
    NSString *_serviceURLWithImageURL;
    NSString *_imageChannelName;
    UIView *_thunmnailImageMaskView;
    NSLayoutConstraint *_feedbackBtnToContainterBottomConstraint;
    UIButton *_feedbackBtn;
    UIButton *_feedbackWholeBtn;
    UIButton *_shareBtn;
    UIPinchGestureRecognizer *_twoFingersPinch;
    UIButton *_cancelBtn;
    UIButton *_suggestionBtn;
    UIButton *_customerServiceBtn;
    UILabel *_customerServiceLabel;
    UIButton *_customerCenterBtn;
    UILabel *_customerCenterLabel;
    UIView *_bottomBtnContainerView;
    UIView *_topImageContainerView;
    UIView *_youyouSpaceView;
    UIAlertView *_cancelAlertView;
    CTFeedbackGuidingView *_guideView;
    CTFeedbackQRCodeView *_feedbackQRCodeView;
    UIView *_topBarView;
    UIView *_bottomBarView;
    UIButton *_clearBtn;
    UIButton *_undoBtn;
    UIButton *_thinStrokeBtn;
    UIButton *_thickStrokeBtn;
    NSLayoutConstraint *_btnContainerViewHeightConstraint;
    UILabel *_clearLabel;
    UILabel *_thinStrokeLabel;
    UILabel *_undoLabel;
    UILabel *_thickStrokeLabel;
    CTFeedbackDrawView *_drawView;
    NSLayoutConstraint *_drawViewWidthConstraint;
    NSLayoutConstraint *_drawViewHeightConstraint;
    UIView *_feedbackBottomView;
    UIView *_thumbnailView;
    UIImageView *_thumbnailImageView;
    UIImageView *_youyouWBImageView;
    NSLayoutConstraint *_youyouWidthConstraint;
    NSLayoutConstraint *_youyouHeightConstraint;
    NSLayoutConstraint *_youyouLeadingConstraint;
    NSLayoutConstraint *_youyouToThunmbnailViewConstraint;
    NSLayoutConstraint *_thumbnailViewWidthConstraint;
    NSLayoutConstraint *_thumbnailViewHeightConstraint;
    NSLayoutConstraint *_bottomBarLeading;
    NSLayoutConstraint *_bottomBarTrailing;
    NSArray *_bottomBarSpacing;
    NSString *_currentBU;
}

@property(copy, nonatomic) NSString *currentBU; // @synthesize currentBU=_currentBU;
@property(retain, nonatomic) NSArray *bottomBarSpacing; // @synthesize bottomBarSpacing=_bottomBarSpacing;
@property(retain, nonatomic) NSLayoutConstraint *bottomBarTrailing; // @synthesize bottomBarTrailing=_bottomBarTrailing;
@property(retain, nonatomic) NSLayoutConstraint *bottomBarLeading; // @synthesize bottomBarLeading=_bottomBarLeading;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailViewHeightConstraint; // @synthesize thumbnailViewHeightConstraint=_thumbnailViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailViewWidthConstraint; // @synthesize thumbnailViewWidthConstraint=_thumbnailViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *youyouToThunmbnailViewConstraint; // @synthesize youyouToThunmbnailViewConstraint=_youyouToThunmbnailViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *youyouLeadingConstraint; // @synthesize youyouLeadingConstraint=_youyouLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *youyouHeightConstraint; // @synthesize youyouHeightConstraint=_youyouHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *youyouWidthConstraint; // @synthesize youyouWidthConstraint=_youyouWidthConstraint;
@property(retain, nonatomic) UIImageView *youyouWBImageView; // @synthesize youyouWBImageView=_youyouWBImageView;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *feedbackBottomView; // @synthesize feedbackBottomView=_feedbackBottomView;
@property(retain, nonatomic) NSLayoutConstraint *drawViewHeightConstraint; // @synthesize drawViewHeightConstraint=_drawViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *drawViewWidthConstraint; // @synthesize drawViewWidthConstraint=_drawViewWidthConstraint;
@property(retain, nonatomic) CTFeedbackDrawView *drawView; // @synthesize drawView=_drawView;
@property(retain, nonatomic) UILabel *thickStrokeLabel; // @synthesize thickStrokeLabel=_thickStrokeLabel;
@property(retain, nonatomic) UILabel *undoLabel; // @synthesize undoLabel=_undoLabel;
@property(retain, nonatomic) UILabel *thinStrokeLabel; // @synthesize thinStrokeLabel=_thinStrokeLabel;
@property(retain, nonatomic) UILabel *clearLabel; // @synthesize clearLabel=_clearLabel;
@property(retain, nonatomic) NSLayoutConstraint *btnContainerViewHeightConstraint; // @synthesize btnContainerViewHeightConstraint=_btnContainerViewHeightConstraint;
@property(nonatomic) __weak UIButton *thickStrokeBtn; // @synthesize thickStrokeBtn=_thickStrokeBtn;
@property(nonatomic) __weak UIButton *thinStrokeBtn; // @synthesize thinStrokeBtn=_thinStrokeBtn;
@property(nonatomic) __weak UIButton *undoBtn; // @synthesize undoBtn=_undoBtn;
@property(nonatomic) __weak UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(nonatomic) __weak UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(nonatomic) __weak UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) CTFeedbackQRCodeView *feedbackQRCodeView; // @synthesize feedbackQRCodeView=_feedbackQRCodeView;
@property(retain, nonatomic) CTFeedbackGuidingView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIAlertView *cancelAlertView; // @synthesize cancelAlertView=_cancelAlertView;
@property(retain, nonatomic) UIView *youyouSpaceView; // @synthesize youyouSpaceView=_youyouSpaceView;
@property(retain, nonatomic) UIView *topImageContainerView; // @synthesize topImageContainerView=_topImageContainerView;
@property(retain, nonatomic) UIView *bottomBtnContainerView; // @synthesize bottomBtnContainerView=_bottomBtnContainerView;
@property(retain, nonatomic) UILabel *customerCenterLabel; // @synthesize customerCenterLabel=_customerCenterLabel;
@property(retain, nonatomic) UIButton *customerCenterBtn; // @synthesize customerCenterBtn=_customerCenterBtn;
@property(retain, nonatomic) UILabel *customerServiceLabel; // @synthesize customerServiceLabel=_customerServiceLabel;
@property(retain, nonatomic) UIButton *customerServiceBtn; // @synthesize customerServiceBtn=_customerServiceBtn;
@property(retain, nonatomic) UIButton *suggestionBtn; // @synthesize suggestionBtn=_suggestionBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIPinchGestureRecognizer *twoFingersPinch; // @synthesize twoFingersPinch=_twoFingersPinch;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *feedbackWholeBtn; // @synthesize feedbackWholeBtn=_feedbackWholeBtn;
@property(retain, nonatomic) UIButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) NSLayoutConstraint *feedbackBtnToContainterBottomConstraint; // @synthesize feedbackBtnToContainterBottomConstraint=_feedbackBtnToContainterBottomConstraint;
@property(retain, nonatomic) UIView *thunmnailImageMaskView; // @synthesize thunmnailImageMaskView=_thunmnailImageMaskView;
@property(retain, nonatomic) NSString *imageChannelName; // @synthesize imageChannelName=_imageChannelName;
@property(retain, nonatomic) NSString *serviceURLWithImageURL; // @synthesize serviceURLWithImageURL=_serviceURLWithImageURL;
@property(retain, nonatomic) NSString *currentCustomerServiceURL; // @synthesize currentCustomerServiceURL=_currentCustomerServiceURL;
@property(retain, nonatomic) UIImageView *youyouheadImageView; // @synthesize youyouheadImageView=_youyouheadImageView;
@property(retain, nonatomic) UIImageView *youyouhandImageView; // @synthesize youyouhandImageView=_youyouhandImageView;
@property(retain, nonatomic) UIImageView *bkImageView; // @synthesize bkImageView=_bkImageView;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelPreviousShowEditViewEditBar;
- (void)hideEditViewEditBar;
- (void)showEditViewEditBar;
- (void)undoAllowOrNot:(_Bool)arg1;
- (void)feedbackCancel;
- (void)feedbackCommitFinish;
- (void)hideAlertView;
- (void)showAlertView;
- (void)ifHiddenCustomerServiceBtn:(_Bool)arg1;
- (void)ifHiddenStatusBar:(_Bool)arg1;
- (id)urlForGeneratingQRCode;
- (id)pixellateImage:(id)arg1 withPixelNumber:(double)arg2;
- (void)saveImage;
- (void)dismiss;
- (void)autoDismiss;
- (void)hideEditBar;
- (void)showEditBar;
- (void)disabelClearAndUndoLabel;
- (void)enableClearAndUndoLabel;
- (void)canUndo:(_Bool)arg1;
- (void)setThickStrokeSelected;
- (void)setThinStrokeSelected;
- (void)removeGuidingView;
- (void)thickStroke:(id)arg1;
- (void)thinStroke:(id)arg1;
- (void)confirm:(id)arg1;
- (void)undo:(id)arg1;
- (void)pressCustomerCenterBtn:(id)arg1;
- (id)generateURLWithText:(id)arg1;
- (id)generateURLParameters:(id)arg1 serviceURL:(id)arg2;
- (void)pressCustomerServiceBtn:(id)arg1;
- (void)pressSuggestionBtn:(id)arg1;
- (void)clear:(id)arg1;
- (void)cancel:(id)arg1;
- (void)pressShareBtn:(id)arg1;
- (void)pressFeedback:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)awakeFromNib;
- (void)setPageID;
- (void)drawRect:(struct CGRect)arg1;
- (void)sendGetCustomerServiceInfoRequest;
- (void)initPathRecord;
- (void)initPenColor;
- (void)initBKImageView;
- (void)initDrawView;
- (id)initWithSourceImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
