//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIColor, UIView;

@interface SInfoTableViewCell : UITableViewCell
{
    UIView *_sepLine;
    UIColor *_originTextLabelColor;
    UIColor *_originDetailLabelColor;
}

@property(retain, nonatomic) UIColor *originDetailLabelColor; // @synthesize originDetailLabelColor=_originDetailLabelColor;
@property(retain, nonatomic) UIColor *originTextLabelColor; // @synthesize originTextLabelColor=_originTextLabelColor;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
