//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPListViewController.h"

@class NSString;

@interface PPao_CircleCollectionListViewController : QYPPListViewController
{
    NSString *_wallID;
    long long _circleType;
}

@property(nonatomic) long long circleType; // @synthesize circleType=_circleType;
@property(retain, nonatomic) NSString *wallID; // @synthesize wallID=_wallID;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)refresh;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

