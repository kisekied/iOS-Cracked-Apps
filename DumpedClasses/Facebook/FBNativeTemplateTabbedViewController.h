//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBNativeTemplateViewControllerProtocol-Protocol.h"
#import "FIGTabsComponentListener-Protocol.h"

@class FBMemNTTabbedViewController, FBUserSession, FIGTabsComponentHostingView, NSArray, NSString;

@interface FBNativeTemplateTabbedViewController : UIViewController <FIGTabsComponentListener, FBNativeTemplateViewControllerProtocol>
{
    FBUserSession *_session;
    FBMemNTTabbedViewController *_initialConfig;
    NSArray *_viewControllers;
    FIGTabsComponentHostingView *_tabsView;
    long long _selectedIndex;
    UIViewController *_currentVisibleViewController;
}

- (void).cxx_destruct;
- (void)_updateVisibleTabs;
- (void)didSelectTabWithIndex:(long long)arg1;
- (id)analyticsModule;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithSession:(id)arg1 shellItemID:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

