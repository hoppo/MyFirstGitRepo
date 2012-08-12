//
//  RecipeListViewController.h
//  slowcook
//
//  Created by John Hopkins on 20/02/2012.
//  Copyright (c) 2012 cocoacoda.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeListViewController : UITableViewController <UISearchBarDelegate> {
    NSArray *_recipes;
    NSMutableArray *_searchRecipes;
    NSManagedObjectContext *_context;
}

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, retain) NSArray *recipes;
@property (nonatomic, copy) NSMutableArray *searchRecipes;
@property (nonatomic, retain) NSManagedObjectContext *context;

@end
