//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ArticleModelUpdateHelper : NSObject
{
}

+ (id)pathForDataBaseFileName:(id)arg1 fileInDocumentDirectory:(_Bool)arg2;
+ (_Bool)dataBaseFileExistForFileName:(id)arg1 fileInDocumentDirectory:(_Bool)arg2;
+ (_Bool)deleteDataBaseForFileName:(id)arg1 fileInDocumentDirectory:(_Bool)arg2;
+ (void)saveCategorySubscribedsAndRemoveOldCategoryDB;
+ (void)saveOldCategoryModelInfo:(id)arg1;
+ (void)clearOldCategoryModelUserDefaultInfo;
+ (id)categoryIDsForSavedOldCategoryModel;
+ (_Bool)deleteCategoryCoreDataFilesIfNeed;
+ (void)deleteADExpirePlist;
+ (void)deleteCoreDataFileIfNeed;

@end
