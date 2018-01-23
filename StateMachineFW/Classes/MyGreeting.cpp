//
//  MyGreeting.cpp
//  Pods-StateMachineFW_Example
//
//  Created by David Jangdal on 2018-01-23.
//

#include "MyGreeting.hpp"

Greeting::Greeting() {
    greeting = "Hello C++!";
}

std::string Greeting::greet() {
    return greeting;
}
