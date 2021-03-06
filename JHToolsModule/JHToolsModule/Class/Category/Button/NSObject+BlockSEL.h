//
//  NSObject+BlockSEL.h
//  IKToolsModule
//
//  Created by HU on 2018/6/27.
//  Copyright © 2018年 HU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/**
 @param weakSelf 方便使用，用来打破循环引用。使用时需要改成实际类型，否则没有代码提示.
 @param arg 事件默认传递的对象，比如`NSNotification`，`UIButton`。
 */
typedef void (^callback)(id weakSelf, id arg);

@interface NSObject (BlockSEL)

/**
 用block来代替selector
 */
- (SEL)selectorBlock:(callback)block;
@end
