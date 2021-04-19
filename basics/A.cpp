//
//  A.cpp
//  basics
//
//  Created by Klaus Ahrens on 12.03.21.
//

/*
  Demo of:
    - separate compilation
    - include ALL needed headers
    - define missing member functions
*/

#include "A.hpp"

#include <iostream>
#include <string>

void out(std::string msg){
    std::cout<<msg<<"\n";
}

std::string A::makeID() {
        std::string ID;
        ID.push_back(id);
        ID += std::to_string(number++);
        return ID;
}

void A::tweet() { std::cout<<myID()<<" alive\n"; }
    
A::A(): ID(makeID()) { out(ID+" created"); }

A::~A() { out(ID+" destroyed"); }

int A::number = 0; // not in the header!
