//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface GWHomeSpecialCustomViewCell : UICollectionViewCell
{
    UILabel *_tagLabel;
    UILabel *_infoLabel;
}

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)update:(id)arg1;
- (void)layoutSubviews;

@end
