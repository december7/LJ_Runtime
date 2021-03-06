//
//  NSSet+HYBUnicodeReadable.m
//  demo
//
//  Created by huangyibiao on 15/12/29.
//  Copyright © 2015年 huangyibiao. All rights reserved.
//

#import "NSSet+HYBUnicodeReadable.h"

@implementation NSSet (HYBUnicodeReadable)

- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level {
  NSMutableString *desc = [NSMutableString string];
  
  NSMutableString *tabString = [[NSMutableString alloc] initWithCapacity:level];
  for (NSUInteger i = 0; i < level; ++i) {
    [tabString appendString:@"\t"];
  }
  
  NSString *tab = @"\t";
  if (level > 0) {
    tab = tabString;
  }
  [desc appendString:@"\t{(\n"];
  
  for (id obj in self) {
    if ([obj isKindOfClass:[NSDictionary class]]
        || [obj isKindOfClass:[NSArray class]]
        || [obj isKindOfClass:[NSSet class]]) {
      NSString *str = [((NSDictionary *)obj) descriptionWithLocale:locale indent:level + 1];
      [desc appendFormat:@"%@\t%@,\n", tab, str];
    } else if ([obj isKindOfClass:[NSString class]]) {
      [desc appendFormat:@"%@\t\"%@\",\n", tab, obj];
    } else {
      [desc appendFormat:@"%@\t%@,\n", tab, obj];
    }
  }
  
  [desc appendFormat:@"%@)}", tab];
  
  return desc;
}

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com