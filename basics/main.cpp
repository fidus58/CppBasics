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
#include <memory>

#include "A.hpp"
#include "B.hpp"

int main(){
    void out(std::string);
    {   out("----");
        std::unique_ptr<B> pb (new B); // why not = new B;
        pb->tweet();  // no leak
        // std::unique_ptr<B> pb1 (pb);
        std::unique_ptr<B> pb1 (std::move(pb)); // take ownership
        pb1->tweet();
        //pb->tweet();
        out("----");
    }
    {   out("----");
        std::shared_ptr<B> pb (new B); // why not = new B;
        pb->tweet();  // no leak
        std::shared_ptr<B> pb1 (pb); // take ownership
        pb1->tweet();
        pb->tweet();
        out("----");
    }
}
