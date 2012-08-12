//
//  Ingredient.h
//  slowcook
//
//  Created by John Hopkins on 03/07/2012.
//  Copyright (c) 2012 cocoacoda.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Recipe;

@interface Ingredient : NSManagedObject

@property (nonatomic, retain) NSString * ingredientMeasure;
@property (nonatomic, retain) NSString * ingredientName;
@property (nonatomic, retain) NSNumber * ingredientQuantity;
@property (nonatomic, retain) NSString * ingredientState;
@property (nonatomic, retain) Recipe *recipe;

@end
