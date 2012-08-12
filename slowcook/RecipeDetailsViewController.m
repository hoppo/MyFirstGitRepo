//
//  RecipeDetailsViewController.m
//  slowcook
//
//  Created by John Hopkins on 21/02/2012.
//  Copyright (c) 2012 cocoacoda.com. All rights reserved.
//

#import "RecipeDetailsViewController.h"
#import "Recipe.h"
#import "Ingredient.h"
#import "Review.h"

@implementation RecipeDetailsViewController
@synthesize context;
@synthesize recipeToDisplay;
@synthesize RecipeTitleLabel;
@synthesize RecipeCookTimeLabel;
@synthesize ReviewText;

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.title = recipeToDisplay.recipeTitle;
    
    self.RecipeTitleLabel.text = recipeToDisplay.recipeTitle;
    self.RecipeCookTimeLabel.text = recipeToDisplay.recipeCookTime;

    
    NSSet *set = recipeToDisplay.review;
    for (Review *review in set) {
        
        NSNumber *number = review.reviewRating;
        
        NSString *string = [NSString stringWithFormat:@"%d", [number intValue]];
        
        ReviewText.text = string;
    }

}

- (void)viewDidUnload
{
    [self setRecipeTitleLabel:nil];
    [self setRecipeCookTimeLabel:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
