//
//  UIControl+HYBBlock.h
//  RuntimeDemo
//
//  Created by huangyibiao on 15/12/27.
//  Copyright © 2015年 huangyibiao. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^HYBTouchUpBlock)(id sender);

@interface UIControl (HYBBlock)

@property (nonatomic, copy) HYBTouchUpBlock hyb_touchUpBlock;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com