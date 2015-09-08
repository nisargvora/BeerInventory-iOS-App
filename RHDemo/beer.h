//
//  beer.h
//  RHDemo
//
//  Created by Nisarg Vora on 9/1/15.
//  Copyright (c) 2015 Nisarg Vora. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeerCategory.h"

@interface beer : NSObject

@property (nonatomic) NSString * categoryName;
@property (nonatomic) NSString * beerName;
@property (nonatomic) NSString * beerLocation;
@property (nonatomic) NSString * beerABV;
@property (nonatomic) NSString * beerPrice;
@property (nonatomic) NSString * beerDescription;
@property (nonatomic) NSString * beerDateAdded;
@property (nonatomic) NSString * beerSize;


@end
