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
#include <vector>

#include "A.hpp"

int main(){
    A a0;
    
    A a1 = a0;
    // A a1 = std::move(a0); // one or two objects?
//
//    a0.tweet();
//    a1.tweet();
//
//    A as[] = {a0, a1};
//    as[0].tweet();
//    as[1].tweet();
    
//    std::vector<A> av; // = {a0, a1};
//    av.reserve(2);
//    av.push_back(a0);
//    av.push_back(a1);
//    av[0].tweet();
//    av[1].tweet();
}
