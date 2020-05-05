#include <iostream>
#include <vector>
#include <map>

/* example for variable argument template
template<typename... Ts> class Magic;


class Magic<int,
            std::vector<int>,
            std::map<std::string,
            std::vector<int>>> darkMagic;
*/

template <typename... Ts>
void magic(Ts... args) {
std::cout << sizeof...(args) << std::endl;
}

//1. Recursive template function
template<typename T0>
void printf1(T0 value) {

    std::cout << value << std::endl;
}

template<typename T, typename... Ts>
void printf1(T value, Ts... args) {

    std::cout << value << std::endl;
    printf1(args...);
}
//2. Variable parameter template expansion
template<typename T0, typename... T>
void printf2(T0 t0, T...t) {
    std::cout << t0 << std::endl;
    if constexpr (sizeof...(t) > 0) printf2(t...);
}

//3. Initialize list expansion
template<typename T, typename... Ts>
auto printf3 (T value, Ts... args) {
    std::cout << value << std::endl;
    (void) std::initializer_list<T>{([&args] {
        std::cout<< args << std::endl;
    }(),value)...};
}

template<typename ... T>
auto sumup(T ... t) {
    return (t + ...);
    
}

int main(int argc, char **argv) {
    
    magic();
    magic(1);
    magic(1,"test2");
    printf1(1, 2,"123", 1.1);
    printf2("A", "B","666", 69.1);
    printf3("aasd", "dwf aB","wsfa666", 69.1);
    std::cout << sumup(1,2,3,4,5,6,7,8,9,10) << std::endl;
    return 0;
}

