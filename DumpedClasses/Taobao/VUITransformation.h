//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VUIMatrix4, VUIQuaternion, VUIVector3;

@interface VUITransformation : NSObject
{
    _Bool _mDirty;
    VUIQuaternion *_mRotation;
    VUIVector3 *_mScale;
    VUIVector3 *_mTranslation;
    VUIVector3 *_mUpDirection;
    VUIVector3 *_mTmpVector;
    VUIQuaternion *_mTmpQuaternion;
    VUIMatrix4 *_mMatrix;
    VUIMatrix4 *_mTmpMatrix;
}

@property(retain, nonatomic) VUIMatrix4 *mTmpMatrix; // @synthesize mTmpMatrix=_mTmpMatrix;
@property(retain, nonatomic) VUIMatrix4 *mMatrix; // @synthesize mMatrix=_mMatrix;
@property(nonatomic) _Bool mDirty; // @synthesize mDirty=_mDirty;
@property(retain, nonatomic) VUIQuaternion *mTmpQuaternion; // @synthesize mTmpQuaternion=_mTmpQuaternion;
@property(retain, nonatomic) VUIVector3 *mTmpVector; // @synthesize mTmpVector=_mTmpVector;
@property(retain, nonatomic) VUIVector3 *mUpDirection; // @synthesize mUpDirection=_mUpDirection;
@property(retain, nonatomic) VUIVector3 *mTranslation; // @synthesize mTranslation=_mTranslation;
@property(retain, nonatomic) VUIVector3 *mScale; // @synthesize mScale=_mScale;
@property(retain, nonatomic) VUIQuaternion *mRotation; // @synthesize mRotation=_mRotation;
- (void).cxx_destruct;
- (id)description;
- (void)onCalculateMatrix:(id)arg1 scale:(id)arg2 rotation:(id)arg3 translation:(id)arg4;
- (id)getMatrixWithRightMultiply:(id)arg1;
- (id)getMatrixWithLeftMultiply:(id)arg1;
- (id)getMatrix;
- (_Bool)equals:(id)arg1;
- (id)setAll:(id)arg1;
- (id)setTowards:(id)arg1 upDirection:(id)arg2;
- (id)setTowards:(id)arg1;
- (id)setTranslation:(id)arg1;
- (id)setTranslationX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)setRotation:(id)arg1;
- (id)setRotationX:(float)arg1 Y:(float)arg2 Z:(float)arg3 angle:(float)arg4;
- (id)setScaleX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)setScale:(id)arg1;
- (id)setScaleF:(float)arg1;
- (id)reset;
- (id)init;

@end
