//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGCConfBusModel;

@interface DGCConfigManager : NSObject
{
    DGCConfBusModel *_confBusModel;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DGCConfBusModel *confBusModel; // @synthesize confBusModel=_confBusModel;
- (void).cxx_destruct;
- (id)getComplainReasonsByIds:(id)arg1;
- (id)getRefundReasonsByIds:(id)arg1;
- (void)doUpdateConfig;
- (void)updateConfig:(_Bool)arg1;
- (id)configDocumentsPath;
- (void)copyBunndleConfigToDocumentConifg;
- (void)loadLocalConfig;
- (id)init;

@end
