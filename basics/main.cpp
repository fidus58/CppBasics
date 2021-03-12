//
//  main.cpp
//  basics
//
//  Created by Klaus Ahrens on 12.03.21.
//

/*
  Demo of:
    - header usage
    - free standing functions
    - string handling
    - i/o
    - members per class and per object
    - constness
    - constructors/destructors
    - global/local variables
*/
 

#include <iostream>
#include <string>

void out(std::string msg){
    std::cout<<msg<<"\n";
}

class A {
    static const char id = 'A'; // per class and const
    static int number;          // per class ascending

    const std::string ID;   // per object
    std::string makeID() {  // private, not for external use
        std::string ID;     // local var: an empty string
        ID.push_back(id);               // letter
        ID += std::to_string(number++); // number
        return ID;
    }
public:
    std::string myID() { return ID; }
    void tweet() { std::cout<<myID()<<" alive\n"; }
    A(): ID(makeID()) // initialization !
    {
        // ID = makeID(); // ???
        out(ID+" created");
        
    }                  // ctor
    ~A() { out(ID+" destroyed"); }           // dtor
    // in real life, ctors and dtors should NEVER cause
    // global effects (as aoutputs)! we do this for the sake
    // of life time inspection.
} a;// mind the ;

int A::number = 0;

int main(){
    A a;     // usual scoping: possible, but not recommended
    a.tweet();
    {
        A a;
        a.tweet();
    }
    ::a.tweet(); // the global one
}
