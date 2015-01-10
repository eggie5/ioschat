//
//  MessagesViewController.h
//  curbcall_questions
//
//  Created by Alex Egg on 1/9/15.
//  Copyright (c) 2015 Alex Egg. All rights reserved.
//

#import "JSQMessagesViewController.h"
#import <JSQMessage.h>
#import <JSQSystemSoundPlayer/JSQSystemSoundPlayer.h>
#import "ChatDataSource.h"

@interface MessagesViewController : JSQMessagesViewController
@property (strong, nonatomic) ChatDataSource * data_source;
@end
