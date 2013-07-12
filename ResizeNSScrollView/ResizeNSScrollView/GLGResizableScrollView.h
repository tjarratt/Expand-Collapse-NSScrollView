//
//  GLGResizableScrollView.h
//  GLGResizableScrollView
//
//  Created by Tim Jarratt on 7/11/13.
//  Copyright (c) 2013 General Linear Group. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface GLGResizableScrollView : NSScrollView
-(void) shouldResize;
@end

#pragma mark - subview delegate protocol
@protocol GLGResizableDelegate <NSObject>

@property (assign) GLGResizableScrollView *delegate;
- (void) willResize;

@end