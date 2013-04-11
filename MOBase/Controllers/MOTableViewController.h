//
//  MOTableViewController.h
//  MOBase
//
//  Created by Xu Xiao Jiang on 4/11/13.
//  Copyright (c) 2013 Xu Xiao Jiang. All rights reserved.
//

#import "MOViewController.h"

@interface MOTableViewController : MOViewController

@property (nonatomic, weak) IBOutlet UITableView *tableView;
@property (nonatomic, strong) NSArray *dataArray;


@end
