//
//  MyGreeting.hpp
//  Pods-StateMachineFW_Example
//
//  Created by David Jangdal on 2018-01-23.
//

#ifndef MyGreeting_hpp
#define MyGreeting_hpp

#include <stdio.h>
#include <string>

class Greeting {
    std::string greeting;
public:
    Greeting();
    std::string greet();
};

#endif /* MyGreeting_hpp */
