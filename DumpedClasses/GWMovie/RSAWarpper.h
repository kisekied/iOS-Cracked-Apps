//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RSAWarpper : NSObject
{
    NSString *_publicKey;
    NSString *_privateKey;
    struct rsa_st *_publicKeyRSA;
    struct rsa_st *_privateKeyRSA;
    int _padding;
}

@property(nonatomic) int padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (id)decryptDataWithPrivateKey:(id)arg1;
- (id)decryptDataWithPublicKey:(id)arg1;
- (id)encryptDataWithPrivateKey:(id)arg1;
- (id)encryptDataWithPublicKey:(id)arg1;
- (void)setPrivateKey:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (id)init;

@end
