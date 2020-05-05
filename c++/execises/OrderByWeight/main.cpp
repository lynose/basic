#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include <iostream>
#include <sstream>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <tuple>

class WeightSort
{
public:
    static std::string orderWeight(const std::string &strng);
};

std::string WeightSort::orderWeight(const std::string &strng)
{
    std::string orderString;
    std::vector<std::tuple<int,std::string>> ref_weight;
    std::istringstream iss(strng);
    std::vector<std::string>
    results((std::istream_iterator<std::string>(iss)),
                                 std::istream_iterator<std::string>());
    for(auto it = results.begin(); it != results.end(); ++it)
    {
        std::string current = *it;
        const char * cstring=  current.c_str();
        
        int weight=0;
        for (int i = 0; i < current.length();i++) 
        {
            char c;
            strncpy(&c, &cstring[i], 1);
            weight += atoi(&c);
        }
        ref_weight.push_back(std::make_tuple(weight,current));
        sort(ref_weight.begin(), ref_weight.end()); 
    }
    for (auto it= ref_weight.begin(); it != ref_weight.end();++it)
    {
        orderString.append(std::get<1>(*it));
    }
    return orderString;
}



int main(int argc, char **argv)
{
    const std::string tets = "99 180 33 777 92 170";
    WeightSort sort;
    sort.orderWeight(tets);

    return 0;
}

