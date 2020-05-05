#include <iostream>
#include <functional>


int foo (int a, int b, int c) {
    std::cout << "a : " << a << " b : " << b << " c : " << c << std::endl; 
    return 0;
    
}

int main(int argc, char **argv) {
    //bind parameter 1, 2 on function foo, and use std::placeholders_1 as placeholder
    //for the first parameter
    auto bindFoo = std::bind(foo, std::placeholders::_1, 1,2);
    //when call bindFoo, we only need one param left
    bindFoo(1);
    return 0;
}
