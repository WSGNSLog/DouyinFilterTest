//
//  CIFilter+Category.h
//  DouyinFilterTest
//
//  Created by shiguang on 2018/8/30.
//  Copyright © 2018年 shiguang. All rights reserved.
//

#import <CoreImage/CoreImage.h>
@class CIFilter;
@interface CIFilter (Category)
+(CIFilter *) filterWithLUT:(NSString *) name dimension:(NSInteger) n;
@end
