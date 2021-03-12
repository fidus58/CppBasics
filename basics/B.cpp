//
//  B.cpp
//  basics
//
//  Created by Klaus Ahrens on 12.03.21.
//

#include "B.hpp"

#include <iostream>
#include <string>

void out(std::string);

std::string B::makeID() {
        std::string ID;
        ID.push_back(id);
        ID += std::to_string(number++);
        return ID;
}

void B::tweet() { std::cout<<myID()<<" alive\n"; }
    
B::B(): ID(makeID()) { out(ID+" created"); }

B::~B() { out(ID+" destroyed"); }

int B::number = 0;
