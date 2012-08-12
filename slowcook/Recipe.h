//
//  Recipe.h
//  slowcook
//
//  Created by John Hopkins on 03/07/2012.
//  Copyright (c) 2012 cocoacoda.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Ingredient, Review;

@interface Recipe : NSManagedObject

@property (nonatomic, retain) NSString * recipeCookTemp;
@property (nonatomic, retain) NSString * recipeCookTime;
@property (nonatomic, retain) NSString * recipeDescription;
@property (nonatomic, retain) NSNumber * recipeIsAFavorite;
@property (nonatomic, retain) NSNumber * recipeIsFeatured;
@property (nonatomic, retain) NSNumber * recipeIsVegetarian;
@property (nonatomic, retain) NSString * recipePrepTime;
@property (nonatomic, retain) NSNumber * recipeServings;
@property (nonatomic, retain) NSString * recipeTitle;
@property (nonatomic, retain) NSSet *ingredient;
@property (nonatomic, retain) NSSet *review;
@end

@interface Recipe (CoreDataGeneratedAccessors)

- (void)addIngredientObject:(Ingredient *)value;
- (void)removeIngredientObject:(Ingredient *)value;
- (void)addIngredient:(NSSet *)values;
- (void)removeIngredient:(NSSet *)values;

- (void)addReviewObject:(Review *)value;
- (void)removeReviewObject:(Review *)value;
- (void)addReview:(NSSet *)values;
- (void)removeReview:(NSSet *)values;

@end
