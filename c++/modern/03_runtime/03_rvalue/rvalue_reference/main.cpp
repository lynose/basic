#include <iostream>
#include <string>

//expiring value

void reference(std::string& str) {
    std::cout << "lvalue" << std::endl;
}
void reference(std::string&& str) {
    std::cout << "rvalue" << std::endl;
}

int main(int argc, char **argv) {
    std::string lv1 = "string ,";           //lv1 is a value
    //std::string&& rv1 = "s1";             //illegal, rvalue can't ref to lvalue
    std::string&& rv1 = std::move(lv1);     //legal, std::move can convert lvalue to rvalue
    std::cout << rv1 << std::endl;          //string
    
    const std::string& lv2 = lv1 + lv1;     //legal, const lvalue reference can extend temp variable's lifecycle
    //lv2 += "Test";                        //illegal, const ref can't be modified
    std::cout << lv2 << std::endl;          //string, string,
    
    std::string&& rv2 = lv1 + lv2;          //legal, rvalue ref extend lifecycle
    rv2 += "string";                        //legal, non-const reference can be modified
    std::cout << rv2 << std::endl;          //string,string,string,string
    //reference(lv1);
    //reference(lv1);
    reference(rv1);
    reference(rv2);                         //output: lvalue
    
    // int &a = std::move(1);               //illegal, non-const lvalue reference cannot ref rvalue
    const int &b = std::move(1);           //legal, const lvalue reference cannot
    std::cout << b << std::endl;
    return 0;
}
