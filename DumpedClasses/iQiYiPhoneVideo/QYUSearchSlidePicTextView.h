//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUTouchView.h"

@class PosterImageView, QYBisonAlbum, UIButton, UILabel;

@interface QYUSearchSlidePicTextView : QYUTouchView
{
    QYBisonAlbum *_slideBisonAlbum;
    PosterImageView *_imgView;
    UILabel *_titleLab;
    UILabel *_tagLab;
    UILabel *_subTagLab;
    UILabel *_subTitleLab;
    UIButton *_goCircleBtn;
}

@property(retain, nonatomic) UIButton *goCircleBtn; // @synthesize goCircleBtn=_goCircleBtn;
@property(retain, nonatomic) UILabel *subTitleLab; // @synthesize subTitleLab=_subTitleLab;
@property(retain, nonatomic) UILabel *subTagLab; // @synthesize subTagLab=_subTagLab;
@property(retain, nonatomic) UILabel *tagLab; // @synthesize tagLab=_tagLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) PosterImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) QYBisonAlbum *slideBisonAlbum; // @synthesize slideBisonAlbum=_slideBisonAlbum;
- (void).cxx_destruct;
- (double)getMaxRightOfLabel;
- (void)rebuildUI;
- (void)judgeEmpty:(id)arg1 withDictionary:(id)arg2;
- (void)setBison:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

