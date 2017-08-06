//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArticleMomentModel, NSDictionary, NSString, TTAdDetailCommentModel, UITableView;

@protocol TTCommentViewControllerProtocol <NSObject>
@property(nonatomic) _Bool hasSelfShown;
@property(nonatomic) _Bool enableImpressionRecording;
@property(nonatomic) __weak id <TTCommentDelegate> delegate;
- (void)tt_sendHalfStatusFooterImpressionsForViableCellsWithOffset:(double)arg1;
- (void)tt_sendShowTrackForVisableCells;
- (void)tt_sendShowStatusTrackForCommentShown:(_Bool)arg1;
- (UITableView *)tt_commentTableView;
- (void)tt_commentViewWillScrollToTopCommentCellSimple;
- (void)tt_commentViewWillScrollToTopCommentCell;
- (void)tt_insertCommentWithDict:(NSDictionary *)arg1;
- (void)tt_sendCommentWithContent:(NSString *)arg1 replyCommentID:(NSString *)arg2 replyUserID:(NSString *)arg3 finishBlock:(void (^)(NSError *))arg4;
- (id)initWithViewFrame:(struct CGRect)arg1 dataSource:(id <TTCommentDataSource>)arg2 delegate:(id <TTCommentDelegate>)arg3;

@optional
- (void)tt_clearDefalutReplyCommentModel;
- (id <TTCommentModelProtocol>)tt_defaultReplyCommentModel;
- (_Bool)tt_removeADCommentModel:(TTAdDetailCommentModel *)arg1;
- (_Bool)tt_insertADCommentModel:(TTAdDetailCommentModel *)arg1 atIndex:(unsigned long long)arg2;
- (ArticleMomentModel *)tt_genSimpleMomentModelWithComment:(id <TTCommentModelProtocol>)arg1;
- (void)tt_reloadData;
@end
