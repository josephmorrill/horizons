//
//  NHWishListViewController.h
//  New Horizons
//
//  Created by Hackademy on 5/17/14.
//  Copyright (c) 2014 Hackademy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NHWishListViewController : UITableViewController{
	NSArray *json;
}
@property (nonatomic, strong) NSArray *json;
@property (weak, nonatomic) IBOutlet UITableView *wishList;
@end
