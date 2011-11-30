//
//  BTRoute.h
//  BetterTransit
//
//  Created by Yaogang Lian on 10/16/09.
//  Copyright 2009 Happen Next. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BTRoute : NSObject {
}

@property (nonatomic, retain) NSString * routeId;
@property (nonatomic, retain) NSString * agencyId;
@property (nonatomic, retain) NSString * shortName;
@property (nonatomic, retain) NSString * longName;
@property (nonatomic, assign) BOOL hasSchedule;

- (NSComparisonResult)sortByShortName:(BTRoute *)other;

@end
