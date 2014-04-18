//
//  MasterViewController.h
//  xkcd reader
//
//  Created by Stefan Fodor on 18/04/14.
//  Copyright (c) 2014 Stefan Fodor. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSXMLParserDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong,nonatomic) IBOutlet UITableView *tableView;

@end
