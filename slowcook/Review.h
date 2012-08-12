//
//  Review.h
//  slowcook
//
//  Created by John Hopkins on 03/07/2012.
//  Copyright (c) 2012 cocoacoda.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Recipe;

@interface Review : NSManagedObject

@property (nonatomic, retain) NSNumber * reviewRating;
@property (nonatomic, retain) NSString * reviewText;
@property (nonatomic, retain) Recipe *recipe;

@end
