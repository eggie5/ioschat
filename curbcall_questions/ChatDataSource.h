//
//  ChatDataSource.h
//  curbcall_questions
//
//  Created by Alex Egg on 1/9/15.
//  Copyright (c) 2015 Alex Egg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JSQMessagesBubbleImage.h>

@interface ChatDataSource : NSObject
@property (strong, nonatomic) NSMutableArray *messages;
@property (strong, nonatomic) JSQMessagesBubbleImage *outgoingBubbleImageData;
@property (strong, nonatomic) JSQMessagesBubbleImage *incomingBubbleImageData;
@end
