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

void out(std::string msg){
    std::cout<<msg<<"\n";
}

int main(){
    B b;
    
    A& ra = b; // a reference, every B is an A
    ra.tweet();
    
    B& rb = b;
    rb.tweet();
    
    A* pa = &b; // another kind of reference: a pointer
    pa->tweet(); // same as (*pa).tweet();
    
    B* pb = &b;
    pb->tweet();
    
}
