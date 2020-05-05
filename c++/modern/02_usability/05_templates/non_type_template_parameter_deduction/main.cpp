#include <iostream>

template <typename T, int BufSize> 
class buffer_t {
public:
    T& alloc();
    void free(T& item);
private:
    T data[BufSize];
    
};
/*
template <auto value> void foo() {
    std::cout << value << std::endl;
    return;
    
}
*/
int main(int argc, char **argv) {
    buffer_t <int,100> buf;
    //foo<10>();

    return 0;
}
