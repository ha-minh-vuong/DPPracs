//
//  MapSite.h
//  DPPracs
//
//  Created by Ha Minh Vuong on 9/30/13.
//  Copyright (c) 2013 Ha Minh Vuong. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, Direction) {
    North,
    South,
    East,
    West
};

@interface MapSite : NSObject

- (void)enter;

@end
