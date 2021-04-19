//
//  main.cpp
//  basics
//
//  Created by Klaus Ahrens on 12.03.21.
//

/*
  Demo of:
    - separate compilation
    - header and impl files
*/
 

#include <iostream>
#include <string>

#include "A.hpp"

A a;

int main(){
    A a;     // usual scoping: possible, but not recommended
    a.tweet();
    
    ::a.tweet(); // the global one
}
