//
//  RecipeDetailsViewController.h
//  slowcook
//
//  Created by John Hopkins on 21/02/2012.
//  Copyright (c) 2012 cocoacoda.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface RecipeDetailsViewController : UIViewController {
    NSManagedObjectContext *_context;
    Recipe *_recipeToDisplay;
    
}

@property (nonatomic, retain) NSManagedObjectContext *context;
@property (nonatomic, retain) Recipe *recipeToDisplay;
@property (weak, nonatomic) IBOutlet UILabel *RecipeTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *RecipeCookTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *ReviewText;

@end
