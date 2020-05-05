#include <iostream>
#include <vector>

template class std::vector<bool>;           //force instantiation
extern template class std::vector<double>;  //should not instantiation in current file

template<bool T>
class MagicType {
    bool magic = T;
};

template <typename T, typename U>
class MagicType2 {
public:
    T dark;
    U magic;
};

/* not allowed
template<typename T>
typedef MagicType <std::vector<T>, std::string> FakeDarkMagic;
*/



typedef int (*process)(void *);
using NewProcess = int(*)(void *);
template <typename T>
using TrueDarkMagic = MagicType2<std::vector<T>, std::string>;

template<typename T = int, typename U = int>
auto add(T x, U y) -> decltype(x+y) {
return x+y;
}


int main(int argc, char **argv) {
    std::vector<std::vector<int>> matrix;
    std::vector<MagicType<(1>2)>> magic;
    TrueDarkMagic<bool> you;
    add<int, float>(1,2.0);
    add(1,2);
    return 0;
}
