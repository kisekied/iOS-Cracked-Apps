//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface H5WebKitBugsManager : NSObject
{
}

+ (void)swizzleClassName:(id)arg1 origSelectorName:(id)arg2 newSelector:(SEL)arg3;
+ (void)fixBug_RequestsetHTTPHeader;
+ (void)fixBug_RequestallHTTPHeaderFields;
+ (void)fixBug_WebCoreLocalStorage;
+ (void)fixBug_UIWebSelectSinglePickerEmptyComponents;
+ (void)fixBug_WAKViewAddNilSubview;
+ (void)fixBug_MediaPlayerVolumeView;
+ (void)fixAllBugs;
+ (void)load;
- (void)h5_setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)h5_allHTTPHeaderFields;
- (void)H5WKBMPickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)H5WKBMWAKWiewAddSubview:(id)arg1;
- (void)H5WKBMAllocateVolumeView;

@end
