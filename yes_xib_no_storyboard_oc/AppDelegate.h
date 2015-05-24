//
//  AppDelegate.h
//  yes_xib_no_storyboard_oc
//
//  Created by 麻生 拓弥 on 2015/05/24.
//  Copyright (c) 2015年 麻生 拓弥. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController; // これ

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(strong, nonatomic) UIWindow *window;
@property(strong, nonatomic) ViewController *viewController; // これ

@end