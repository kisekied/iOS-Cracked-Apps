//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQPExtensionRegistry.h"

@class NSMutableDictionary;

@interface MQPMutableExtensionRegistry : MQPExtensionRegistry
{
    NSMutableDictionary *mutableClassMap;
}

+ (id)registry;
@property(retain) NSMutableDictionary *mutableClassMap; // @synthesize mutableClassMap;
- (void).cxx_destruct;
- (void)addExtension:(id)arg1;
- (id)initWithClassMap:(id)arg1;

@end

