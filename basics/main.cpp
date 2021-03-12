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
#include "B.hpp"

int main(){
    B b;
    A& ra = b;
    ra.tweet();    // binds at run time
    
    ra.A::tweet(); // binds at compile time
}
