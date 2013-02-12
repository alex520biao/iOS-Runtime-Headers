/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath, NSString;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSString *_identifier;
    NSIndexPath *_indexPath;
    unsigned int type;
}

@property(retain) NSString * identifier;
@property(retain) NSIndexPath * indexPath;
@property unsigned int type;

+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)identifier;
- (id)indexPath;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
