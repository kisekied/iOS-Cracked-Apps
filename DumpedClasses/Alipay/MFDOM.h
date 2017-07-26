//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFHTMLNode, NSDictionary, NSMutableArray, NSString;

@interface MFDOM : NSObject
{
    _Bool _hasSetDymanicCss;
    unsigned long long _type;
    NSString *_conditionKeyPath;
    NSString *_conditionItemName;
    MFHTMLNode *_htmlNodes;
    NSDictionary *_cssNodes;
    NSDictionary *_eventNodes;
    NSString *_bindingField;
    NSString *_clsType;
    NSString *_clsSubType;
    NSString *_uuid;
    NSString *_cssid;
    MFDOM *_superDom;
    NSMutableArray *_subDoms;
    NSString *_defaultValue;
}

@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSMutableArray *subDoms; // @synthesize subDoms=_subDoms;
@property(nonatomic) __weak MFDOM *superDom; // @synthesize superDom=_superDom;
@property(copy, nonatomic) NSString *cssid; // @synthesize cssid=_cssid;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *clsSubType; // @synthesize clsSubType=_clsSubType;
@property(copy, nonatomic) NSString *clsType; // @synthesize clsType=_clsType;
@property(copy, nonatomic) NSString *bindingField; // @synthesize bindingField=_bindingField;
@property(retain, nonatomic) NSDictionary *eventNodes; // @synthesize eventNodes=_eventNodes;
@property(nonatomic) _Bool hasSetDymanicCss; // @synthesize hasSetDymanicCss=_hasSetDymanicCss;
@property(retain, nonatomic) NSDictionary *cssNodes; // @synthesize cssNodes=_cssNodes;
@property(retain, nonatomic) MFHTMLNode *htmlNodes; // @synthesize htmlNodes=_htmlNodes;
@property(copy, nonatomic) NSString *conditionItemName; // @synthesize conditionItemName=_conditionItemName;
@property(copy, nonatomic) NSString *conditionKeyPath; // @synthesize conditionKeyPath=_conditionKeyPath;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setDefaultValue;
- (void)setupCondition:(id)arg1;
- (id)triggerEvent:(id)arg1 withParams:(id)arg2;
- (void)addSubDom:(id)arg1;
- (id)initWithDomNode:(id)arg1 withCss:(id)arg2 withDataBinding:(id)arg3 withEvents:(id)arg4;

@end
