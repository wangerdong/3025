//
//  Constant.h
//  3025
//
//  Created by ld on 2017/3/27.
//
//

#import <Foundation/Foundation.h>

@interface Constant : NSObject

#define kWXAppKey @"wxad48b0df5c0ca7af"
#define kWXAppSecret @"00c2102413f8139ebb7fb0ab196c91e7"

#define kWXAuthNotification @"wxAuthNotification"

#define kLoginUser @"loginUser"

#define kDomain @"http://www.viewatmobile.cn/3025/"

#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height

#define kNavigationColor [UIColor colorWithRed:254.0f/255.0f green:202.0f/255.0f blue:202.0f/255.0f alpha:1.0f]
#define kBackgroundColor [UIColor colorWithRed:252.0f/255.0f green:246.0f/255.0f blue:246.0f/255.0f alpha:1.0f]
#define kTabbarTitleColor [UIColor colorWithRed:54.0f/255.0f green:54.0f/255.0f blue:54.0f/255.0f alpha:1.0f]
#define kTabbarTitleSelectedColor [UIColor colorWithRed:224.0f/255.0f green:128.0f/255.0f blue:128.0f/255.0f alpha:1.0f]
#define kKeyColor [UIColor colorWithRed:193.0f/255.0f green:155.0f/255.0f blue:115.0f/255.0f alpha:1.0f]
#define kLineColor [UIColor colorWithRed:204.0f/255.0f green:204.0f/255.0f blue:204.0f/255.0f alpha:1.0f]

#define kNavigationTitleColor [UIColor colorWithRed:116.0f/255.0f green:87.0f/255.0f blue:88.0f/255.0f alpha:1.0f]

#define kActivityCategory (@[@"不限", @"兴趣", @"玩乐", @"交友", @"运动", @"户外", @"生活", @"行业"])
#define kActivityCategory1 (@[@"全部", @"创客聚会", @"宠物", @"影视动漫", @"摄影", @"音乐", @"文学", @"电竞", @"艺术收藏", @"兴趣"])
#define kActivityCategory2 (@[@"全部", @"美食", @"麻将棋牌", @"泡吧", @"郊游旅游", @"K歌", @"玩乐"])
#define kActivityCategory3 (@[@"全部", @"车友会", @"70后", @"80后", @"90后", @"同城同乡", @"交友"])
#define kActivityCategory4 (@[@"全部", @"武术", @"跑步", @"健身房", @"台球", @"游泳", @"篮球", @"足球" @"运动"])
#define kActivityCategory5 (@[@"全部", @"徒步", @"垂钓", @"登山", @"露营", @"自驾游", @"骑行", @"户外"])
#define kActivityCategory6 (@[@"全部", @"健康养生", @"茶", @"红酒", @"花草", @"宗教", @"心理学", @"生活"])
#define kActivityCategory7 (@[@"全部", @"投资理财", @"创业", @"公益", @"法律", @"互联网", @"教育", @"行业"])
#define kActivityCategorys (@[@[@"不限"], kActivityCategory1, kActivityCategory2, kActivityCategory3, kActivityCategory4, kActivityCategory5, kActivityCategory6, kActivityCategory7])

@end
