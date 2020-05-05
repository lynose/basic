#include <iostream>
#

using foo = void(int); //function pointer

void functional(foo f){
    f(1);
}

int main(int argc, char **argv) {
    
    auto f = [](int value) {
        std::cout << value << std::endl;
    };
    functional(f); //called by function pointer
    f(1);          //called by lambda expression
    return 0;
}
