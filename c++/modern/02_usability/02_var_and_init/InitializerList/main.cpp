#include <iostream>
#include <vector>
#include <initializer_list>

class Foo { 
public:
    int value_a;
    int value_b;
    Foo(int a,int b) : value_a(a), value_b(b) {}
};

class MagicFoo {
public: 
    std::vector<int> vec;
    MagicFoo(std::initializer_list<int> list) {
        for (std::initializer_list<int>::iterator it = list.begin(); it != list.end(); ++it)
            vec.push_back(*it);
        
    }
    void foo (std::initializer_list<int> list) {
        for (auto it = list.begin(); it != list.end(); ++it)
            vec.push_back(*it);
        
    }
    
};
/*
class ListFoo {
public:
    ListFoo(std::initializer_list<int> list);
    
    
}
*/
int main(int argc, char **argv) {
    
    //before C++11
    int arr[3] = {1,2,3};
    Foo foo(1,2);
    std::vector<int> vec = { 1, 2, 3, 4, 5};
    
    std::cout << "arr[0]: " << arr[0] << std::endl;
    std::cout << "foo: " << foo.value_a << ", " << foo.value_b << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    
        std::cout << *it << std::endl;
    }
    
    //after c++11
    MagicFoo magicFoo = {1, 2, 3, 4, 5};
    magicFoo.foo({13,19});     
    std:: cout << "magicFoo:" << std::endl;
    for (std::vector<int>::iterator it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it) {
    
        std::cout << *it << std::endl;
    }
    
        
    MagicFoo magicFoo2({6,8,10,12});
    
    std:: cout << "magicFoo2:" << std::endl;
    for (std::vector<int>::iterator it = magicFoo2.vec.begin(); it != magicFoo2.vec.end(); ++it) {
    
        std::cout << *it << std::endl;
    }
        MagicFoo magicFoo3 {39, 43};
    
    std:: cout << "magicFoo3:" << std::endl;
    for (auto it = magicFoo3.vec.begin(); it != magicFoo3.vec.end(); ++it) {
    
        std::cout << *it << std::endl;
    }
    
    return 0;
}
