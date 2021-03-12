//
//  A.hpp
//  basics
//
//  Created by Klaus Ahrens on 12.03.21.
//

/*
  Demo of:
    - separate compilation
    - header guards
    - include ALL needed headers
    - define all member data
    - declare at least the member functions
    - define short (inline) member functions
    - header and impl files
*/

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
    virtual void tweet();
    A();         // ctor
    ~A();        // dtor
};

#endif /* A_hpp */
