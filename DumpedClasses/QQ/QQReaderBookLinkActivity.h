//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQActivity.h"

@class NSString, UIImage;

@interface QQReaderBookLinkActivity : QQActivity
{
    UIImage *_activityImage;
    NSString *_activityTitle;
    int _type;
    id <QQReaderBookLinkDelegate> _delegate;
    int _xo;
}

- (void)prepareWithActivityItems:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIImage *activityImage; // @dynamic activityImage;
@property(copy, nonatomic) NSString *activityTitle; // @dynamic activityTitle;
@property(nonatomic) id <QQReaderBookLinkDelegate> delegate; // @dynamic delegate;
@property(nonatomic) int type; // @dynamic type;

@end
