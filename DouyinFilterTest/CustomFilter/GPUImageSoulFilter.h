//
//  GPUImageSoulFilter.h
//  DouyinFilterTest
//
//  Created by shiguang on 2018/8/30.
//  Copyright © 2018年 shiguang. All rights reserved.
//

#import "GPUImageTwoInputFilter.h"

@interface GPUImageSoulFilter : GPUImageTwoInputFilter
@property(nonatomic,assign) float mix;
@property(nonatomic,assign) float scale;


@end
