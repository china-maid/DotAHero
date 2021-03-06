//
//  BGDensityCardComponent.h
//  DotAHero
//
//  Created by Killua Liu on 5/30/13.
//
//

#import "BGComponent.h"

typedef NS_ENUM(NSInteger, BGDensityCard) {
    kShadowPunisher,            // 暗影惩戒者
    kConquerorOfHolyLight,      // 圣光征服者
    kSpreadingPlague,           // 蔓延的瘟疫
    kGameofFate,                // 命运的博弈
    kPuppetOfBackfire,          // 反噬的傀儡
    kSummonerOfDeath,           // 死神的召唤者
    kParanoidMathematician,     // 偏执的数学家
    kRoshanPossession           // Roshan附体
};


@interface BGDensityCardComponent : BGComponent

@property (nonatomic, strong) NSArray *densityArray;
@property (nonatomic, readonly) BGDensityCard density;
@property (nonatomic, copy, readonly) NSString *taskName;

- (id)initWithDensity:(BGDensityCard)aDensity;
+ (id)densityCardComponentWithCard:(BGDensityCard)aDensity;

@end
