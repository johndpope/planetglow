//
//  ViewController.h
//  PlanetGlow
//
//  Created by Derek Lords on 9/3/15.
//  Copyright (c) 2015 DKLEO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WhirlyGlobeViewController.h"
#import "MaplyBaseViewController.h"


@interface ViewController   : UIViewController
    <WhirlyGlobeViewControllerDelegate>
@property (weak,nonatomic) IBOutlet UIBarButtonItem *barButton;
@end

