//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface TTLabeledValue : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_label;
    id <NSCopying><NSSecureCoding> _value;
}

+ (_Bool)supportsSecureCoding;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
@property(copy, nonatomic) id <NSCopying><NSSecureCoding> value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
