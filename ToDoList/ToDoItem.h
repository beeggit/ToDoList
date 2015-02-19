//
//  ToDoItem.h
//  ToDoList
//
//  Created by Brad Brown on 2/18/15.
//  Copyright (c) 2015 Brad Brown. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
