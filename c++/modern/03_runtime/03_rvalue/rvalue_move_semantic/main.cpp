#include <iostream>     //std::cout
#include <utility>      //std::move
#include <vector>       //std::vector
#include <string>       //std::string

class A {
public:
    int *pointer;
    A():pointer(new int(1)) {
    
        std::cout<< "construct" << pointer << std::endl;

    }
    A(A& a):pointer(new int (*a.pointer)) {
    
        std::cout << "copy" << pointer << std::endl;
    } //meaningless object copy
    A(A&& a):pointer(a.pointer){
    
        a.pointer = nullptr;
        std::cout << "move" << pointer << std::endl;
    }
    ~A() {
    
        std::cout << "destruct" << pointer << std::endl;
        delete pointer;
    }
};

//avoid compiler optimizations
A return_rvalue(bool test) {
    A a,b;
    if (test) return a; //equal to static_cast<A&&>(a)
    else 
    return b;           //equal to static_cast<A&&>(b)
    
}


int main(int argc, char **argv) {
    A obj = return_rvalue(false);
    std::cout << "obj:" << std::endl;
    std::cout << obj.pointer << std::endl;
    std::cout << *obj.pointer << std::endl;
    
    //standard library
    std::string str = "Hello world.";
    std::vector<std::string> v;
    
    //use push_back(const T&), copy
    v.push_back(str);
    
    //"str: Hello world."
    std::cout << "str:" << str << std::endl;
    
    // use push_back (const T&&), no copy
    // the string will be moved to vector, and therefor std::move can reduce copy cost
    v.push_back(std::move(str));
    //str ist empty now
    std::cout << "str:" << str << std::endl;
    return 0;
}

