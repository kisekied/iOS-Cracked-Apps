//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel;

@interface TBLiveCommentInputView : UIView <UITextFieldDelegate>
{
    UIView *_backgroundView;
    UILabel *_hintText;
    UIButton *_commentIconButton;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIButton *commentIconButton; // @synthesize commentIconButton=_commentIconButton;
@property(retain, nonatomic) UILabel *hintText; // @synthesize hintText=_hintText;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)openCommentInputBox:(id)arg1;
- (void)updateLayoutConstraints;
- (id)initWithBlock:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
