//
//  CCShareUserOC.h
//  Nextcloud iOS
//
//  Created by Marino Faggiana on 30/11/15.
//  Copyright (c) 2017 Marino Faggiana. All rights reserved.
//
//  Author Marino Faggiana <marino.faggiana@nextcloud.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <UIKit/UIKit.h>

#import "XLFormViewController.h"
#import "OCShareUser.h"
#import "OCConstants.h"

@class tableMetadata;

@interface CCShareUserOC : XLFormViewController

@property (nonatomic, weak) IBOutlet UIButton *endButton;

@property (nonatomic, strong) NSMutableArray *selectedItems;
@property (nonatomic, strong) NSArray *itemsShareWith;
@property (nonatomic, strong) NSMutableArray *users;
@property (nonatomic, strong) NSString *directUser;
@property (nonatomic, strong) tableMetadata *metadata;
@property (nonatomic, strong) NSString *serverUrl;

@property BOOL isDirectory;
@property NSInteger shareType;

- (IBAction)endButtonAction:(id)sender;

- (void)reloadUserAndGroup:(NSArray *)items;

@end
