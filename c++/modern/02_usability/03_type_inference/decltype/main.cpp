#include <iostream>


template <typename T>
void testType(T t) {
    if (std::is_same<decltype(t), int>::value)
        std::cout << "type is int" << std::endl;
    if (std::is_same<decltype(t), float>::value)
        std::cout << "type is float" << std::endl;
    if (std::is_same<decltype(t), double>::value){
        std::cout << "type is double" << std::endl;
    }
}
template <typename T, typename U>
void compareTypes(T t, U u)
{
    if (std::is_same<decltype(t), decltype(u)>::value)
        std::cout << "type t is same" << std::endl;
    else
        std::cout << "type t is not same" << std::endl;
}

template <typename R, typename T, typename U>
R add(T x, U y) {

    return x+y;
}
//c++11
template<typename T, typename U>
auto add2(T x, U y) -> decltype(x+y) {
    return x+y;
}
//c++14
template<typename T,typename U>
auto add3 (T x, U y) {
    return x+y;
}

int main(int argc, char **argv) {
    auto x = 1;
    auto y = 2;

    decltype (x+y) z;
    testType(x);
    testType(z);
    auto f = 1.0;
    testType(f);
    compareTypes(x,y);
    compareTypes(x,f);
    //decltype(x+y) add 
    
    //c++ 11
    auto w = add2<int, double>(1,2.0);
    
    testType(w);
    std::cout << w << std::endl;
    auto q = add3<double, int>(1.3,2);
    
    testType(q);
    std::cout << q << std::endl;
    return 0;
}
