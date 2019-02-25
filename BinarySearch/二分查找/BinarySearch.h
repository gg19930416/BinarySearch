//
//  BinarySearch.h
//  BinarySearch
//
//  Created by 郭刚 on 2019/2/25.
//  Copyright © 2019 郭刚. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BinarySearch : NSObject
/* 递归 **/
+ (NSInteger)binarySearchWithRecursion:(NSArray *)srcArray withDes:(NSNumber *)des;
/** 非递归 */
+ (NSInteger)binarySearchNoRecursion:(NSArray *)srcArray withDes:(NSNumber *)des;

@end

NS_ASSUME_NONNULL_END
