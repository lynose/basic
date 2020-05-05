#include <iostream>
#include <type_traits>

template <typename T>
auto print_type_info(const T& t)
{
    if constexpr (std::is_integral<T>::value) {
        
        std::cout << "is_integral" << std::endl;
        return t + 1;
    }
    else{
        std::cout << "is_not_integral" << std::endl;
        return t + 0.001;
        
    }

}

class A {};
 
enum E : int {};
 
template <class T>
T f(T i)
{
    static_assert(std::is_integral<T>::value, "Integral required.");
    return i;
}

int main(int argc, char **argv) {
    std::cout << print_type_info(5) << std::endl;
    std::cout << print_type_info(3.14) << std::endl;
    
    std::cout << std::boolalpha;
    std::cout << std::is_integral<A>::value << '\n';
    std::cout << std::is_integral<E>::value << '\n';
    std::cout << std::is_integral<float>::value << '\n';
    std::cout << std::is_integral<int>::value << '\n';
    std::cout << std::is_integral<bool>::value << '\n';
    std::cout << f(123) << '\n';
   
    return 0;
}
