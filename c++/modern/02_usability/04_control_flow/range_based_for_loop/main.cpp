#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char **argv) {
    
    std::vector<int> vec = {1,2,3,4};
    if (auto itr = std::find(vec.begin(), vec.end(), 3);itr != vec.end()) 
        *itr = 4;
    for (auto element : vec)                //readable
        std::cout << element << std::endl;
    for (auto &element : vec) {             //writeable
        element += 1;
    }
    for (auto element : vec)                //readable
        std::cout << element << std::endl;
    return 0;
}
