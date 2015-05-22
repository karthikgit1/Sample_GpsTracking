//
//  ViewController.h
//  Sample_GpsTracking
//
//  Created by Vy Systems - iOS1 on 5/22/15.
//  Copyright (c) 2015 Vy Systems - iOS1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationShareModel.h"
#import "LocationTracker.h"
@interface ViewController : UIViewController
{
    
}

@property LocationTracker * locationTracker;
@property (nonatomic) NSTimer* locationUpdateTimer;

@property (strong,nonatomic) LocationShareModel * shareModel;

@end

