//
//  HYBTestModel.h
//  RuntimeDemo
//
//  Created by huangyibiao on 15/12/28.
//  Copyright © 2015年 huangyibiao. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HYBEmptyPropertyProperty <NSObject>

// 设置默认值，若为空，则取出来的就是默认值
- (NSDictionary *)defaultValueForEmptyProperty;

@end

@interface HYBTestModel : NSObject <HYBEmptyPropertyProperty>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) NSNumber *count;
@property (nonatomic, assign) int    commentCount;
@property (nonatomic, strong) NSArray *summaries;
@property (nonatomic, strong) NSDictionary *parameters;
@property (nonatomic, strong) NSSet *results;

@property (nonatomic, strong) HYBTestModel *testModel;

// 只读属性
@property (nonatomic, assign, readonly) NSString *classVersion;

// 通过这个方法来实现自动生成model
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

// 转换成字典
- (NSDictionary *)toDictionary;

// 测试
+ (void)test;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com