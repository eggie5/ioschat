//
//  ChatDataSource.m
//  curbcall_questions
//
//  Created by Alex Egg on 1/9/15.
//  Copyright (c) 2015 Alex Egg. All rights reserved.
//

#import "ChatDataSource.h"
#import "JSQMessages.h"

@implementation ChatDataSource
- (instancetype)init
{
    self = [super init];
    if (self) {
        self.messages = [NSMutableArray new];
        
        /**
         *  Create message bubble images objects.
         *
         *  Be sure to create your bubble images one time and reuse them for good performance.
         *
         */
        JSQMessagesBubbleImageFactory *bubbleFactory = [[JSQMessagesBubbleImageFactory alloc] init];
        
        self.outgoingBubbleImageData = [bubbleFactory outgoingMessagesBubbleImageWithColor:[UIColor jsq_messageBubbleLightGrayColor]];
        self.incomingBubbleImageData = [bubbleFactory incomingMessagesBubbleImageWithColor:[UIColor jsq_messageBubbleGreenColor]];
       
    }
    
    return self;
}
@end
