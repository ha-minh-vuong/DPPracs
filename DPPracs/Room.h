//
//  Room.h
//  DPPracs
//
//  Created by Ha Minh Vuong on 9/30/13.
//  Copyright (c) 2013 Ha Minh Vuong. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MapSite.h"

@interface Room : MapSite

- (instancetype)initWithRoomNumber:(NSInteger *)roomNo;

- (MapSite *)getSideInDirection:(Direction)direction;

- (void)setSide:(MapSite *)mapSide inDirection:(Direction)direction;

@end
