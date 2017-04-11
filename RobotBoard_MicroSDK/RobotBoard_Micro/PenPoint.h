//
//  PenPoint.h
//  
//
//  Created by JMS on 2016/11/16.
//
//

#import <UIKit/UIKit.h>
#import "PenHeader.h"

@interface PenPoint : NSObject

@property (nonatomic,assign) short originalX;
@property (nonatomic,assign) short originalY;

@property (nonatomic, assign) short pressure;//压杆值

@property (nonatomic, assign) DeviceType deviceType;//设备类型

@property (nonatomic, assign) int  isTrail;// 是否是轨迹

@property (nonatomic, assign) int isMove; //标记最后一个点

@property (nonatomic, assign) BatteryState batteryState;//电量信息

@property (nonatomic, assign) int isSw1;

/**
 获取原始点坐标

 */
- (CGPoint)getOriginalPoint;


/**
 获取显示场景点坐标
 
 @param sceneWidth 场景宽
 @param sceneHeight 场景高
 @param isHorizontal 场景是否竖屏
 @return
 */
- (CGPoint)getScenePointWith :(float)sceneWidth :(float)sceneHeight :(BOOL)isHorizontal;

/**
 根据缩放比例获取场景点坐标
 
 @param scaling 缩放比例（0 - 1）
 @param distance 最小的点间隔(重复点)
 @param isHorizontal 场景是否竖屏
 @return 返回坐标点（-10000，-10000）表示重复点（需要手动丢掉）
 */
- (CGPoint)getScenePointWithScaling:(float)scaling MinimumDistance:(float)distance isHorizontal:(BOOL)isHorizontal;
@end
