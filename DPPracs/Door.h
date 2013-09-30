//
//  Door.h
//  DPPracs
//
//  Created by Ha Minh Vuong on 9/30/13.
//  Copyright (c) 2013 Ha Minh Vuong. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MapSite.h"
#import "Room.h"

@interface Door : MapSite

- (instancetype)initWithRoom:(Room *)room andRoom:(Room *)nextRoom;

- (Room *)otherSideFromRoom:(Room *)room;

@end
