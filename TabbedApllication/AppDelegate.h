//
//  AppDelegate.h
//  TabbedApllication
//
//  Created by iphtech9 on 02/02/15.
//  Copyright (c) 2015 iphtech9. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITabBarControllerDelegate, UITabBarDelegate>{
    
    NSMutableArray *tabArray ;
    UITabBarController *tabBarController ;
    
}

@property (strong, nonatomic) UIWindow *window;


@end

