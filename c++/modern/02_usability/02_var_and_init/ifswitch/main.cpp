#include <iostream>
#include <vector>
#include <algorithm>


int main(int argc, char **argv) {
    std::vector<int> vec = {1, 2, 3, 4};

    //after c++17,can be simplefied by using`auto`

    //const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);
    //const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);
    auto itr = std::find(vec.begin(), vec.end(), 2);
    if (itr != vec.end()) {
        std::cout << "Old:" << *itr << std::endl;
        *itr =3;
        std::cout << "New:" << *itr << std::endl;
    }

    //if (const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(),3); 
    if (auto itr = std::find(vec.begin(), vec.end(),3);itr != vec.end()) {
        std::cout << "Old:" << *itr << std::endl;
        *itr = 4;
        std::cout << "New:" << *itr << std::endl;
    }


    //should output: 1,4,3,4. can be simplefied using 'auto'
    //for (std::vector<int>::iterator element = vec.begin(); element != vec.end(); ++element)
    for (auto element = vec.begin(); element != vec.end(); ++element)
        std::cout << *element << std::endl;
    return 0;
}
