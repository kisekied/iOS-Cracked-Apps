//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NMAssetItem, NSOperation, NSOperationQueue, UIImage, UIImageView, UITapGestureRecognizer, VIPhotoView;

@interface NMAssetItemViewController : UIViewController
{
    VIPhotoView *_imageView;
    _Bool _displayOriginalImage;
    UITapGestureRecognizer *_tap;
    NSOperationQueue *_loadOriginalImageQueue;
    NSOperation *_loadImageOperation;
    UIImage *_fullScreenImage;
    id <NMAssetItemViewControllerDelegate> _delegate;
    NMAssetItem *_item;
    long long _pageIndex;
}

@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly, nonatomic) NMAssetItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <NMAssetItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageViewClicked:(id)arg1;
- (void)resetZoom;
- (void)doLoadOriginalImage;
- (void)loadOriginalImage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (_Bool)needDisplayOriginalImage:(id)arg1;
@property(readonly, nonatomic) UIImageView *imageView; // @dynamic imageView;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 loadOriginalImageQueue:(id)arg2;

@end
