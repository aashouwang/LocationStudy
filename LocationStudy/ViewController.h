//
//  ViewController.h
//  LocationStudy
//
//  Created by TangTieshan on 15/7/10.
//  Copyright (c) 2015年 TangTieshan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreLocation/CLLocationManagerDelegate.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate>
{
    CLLocationManager * _locationManager;
    CLGeocoder * _geocoder;
    
    UILabel * _locationLabel;
}
@end

