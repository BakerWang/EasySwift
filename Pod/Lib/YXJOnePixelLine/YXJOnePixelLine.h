//
//  YXJOnePixelLine.h
//  YXJOnePixelLine
//
//  Created by Ben on 15/7/11.
//  Copyright (c) 2015年 X-Team. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, YXJLinePosition){
    YXJLinePositionTop = 0,
    YXJLinePositionRight = 1,
    YXJLinePositionBottom = 2,
    YXJLinePositionLeft = 3
};

#define SINGLE_LINE_WIDTH (1/[UIScreen mainScreen].scale)
#define SINGLE_LINE_ADJUST_OFFSET ((1/[UIScreen mainScreen].scale)/2)

IB_DESIGNABLE
@interface YXJOnePixelLine : UIView

/**
 *  线的颜色，默认为黑色
 */
@property (strong, nonatomic) IBInspectable UIColor *lineColor;
/**
 *  线的位置，默认为YXJLinePositionTop，详见`YXJLinePosition`.
 *  IBInspectable 不支持枚举类型，所以用Integer代替
 */
@property (assign, nonatomic) IBInspectable NSInteger linePosition;

@end
