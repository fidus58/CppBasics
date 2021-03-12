//
//  A.hpp
//  basics
//
//  Created by Klaus Ahrens on 12.03.21.
//

#ifndef A_hpp
#define A_hpp

#include <string>

class A {
    static const char id = 'A'; // per class and const
    static int number;          // per class ascending

    const std::string ID;   // per object
    std::string makeID();
public:
    std::string myID() { return ID; }
    void tweet();
    A();         // ctor
    A(const A&); // copy-ctor !
    ~A();        // dtor
};

#endif /* A_hpp */
