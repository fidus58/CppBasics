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
    b.tweet();
    b.A::tweet();
}
