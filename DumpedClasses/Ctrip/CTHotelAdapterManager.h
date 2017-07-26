//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, UITableView;

@interface CTHotelAdapterManager : NSObject
{
    NSMutableArray *_sectionArr;
    NSMutableSet *_sectionReuse;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableSet *sectionReuse; // @synthesize sectionReuse=_sectionReuse;
@property(retain, nonatomic) NSMutableArray *sectionArr; // @synthesize sectionArr=_sectionArr;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAdatper:(id)arg1;
- (void)insertAdapter:(id)arg1 atIndex:(long long)arg2;
- (void)removeAll;
- (id)getAdapterByClass:(Class)arg1;
- (void)addAdapter:(id)arg1;
- (id)reuseAdapter:(Class)arg1;
- (id)getAdapter:(long long)arg1;
- (long long)getAdapterCount;
- (id)init;

@end
