//
//  B.hpp
//  basics
//
//  Created by Klaus Ahrens on 12.03.21.
//

#ifndef B_hpp
#define B_hpp

#include <iostream>
#include <string>

#include "A.hpp"

class B : public A {            // inheritance
    // separate naming scheme for B
    static const char id = 'B'; // per class and const
    static int number;          // per class ascending

    const std::string ID;   // per object
    std::string makeID();
public:
    std::string myID() { return ID; }
    void tweet() override;
    B();         // ctor
    ~B();        // dtor
};

#endif /* B_hpp */
