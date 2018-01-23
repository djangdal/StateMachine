//
//  MyFramework.m
//  StateMachine
//
//  Created by David Jangdal on 2018-01-23.
//  Copyright © 2018 Electrolux AB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MyFramework.h"
#import "MyGreeting.hpp"

@implementation MyFramework

-(id)init {
    self.myInt = 5;
    self.myString = @"My String";
    
    return self;
}

-(NSString*)doGreeting {
    
    Greeting greeting;
    
    return [NSString stringWithUTF8String:greeting.greet().c_str()] ;
}

@end

