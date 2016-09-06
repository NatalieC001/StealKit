//
//  SKWeakReferenceProxy.h
//  StealKitDemo
//
//  Created by 赵瑜瑜 on 16/9/6.
//  Copyright © 2016年 StealKit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKWeakReferenceProxy : NSProxy

@property (nonatomic, weak, readonly) id target;

- (instancetype)initWithTarget:(id)target;

@end
