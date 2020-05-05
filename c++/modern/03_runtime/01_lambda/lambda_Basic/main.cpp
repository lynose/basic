#include <iostream>
#include <memory>

/*
 [capture list] (parameter list) mutable(optional) exception attribute -> returntype {
 // function body
 }
*/
void lambda_value_capture() {
    int value = 1;
    auto copy_value = [value] {

        return value;
    };
    value = 100;
    auto stored_value = copy_value();
    std::cout <<"stored_value="<< stored_value << std::endl;
    //At this moment,stored_value==1, and value==100
    //Because copy_value has copied when its was created.
}

void lambda_reference_capture() {
    int value = 1;
    auto copy_value = [&value] {

        return value;
    };
    value = 100;
    auto stored_value = copy_value();
    std::cout <<"stored_value="<< stored_value << std::endl;
    //At this moment,stored_value==1, and value==100
    //Because copy_value has copied when its was created.
}

void lambda_value_implicit_capture() {
    int value = 1;
    auto copy_value = [=] {

        return value;
    };
    value = 100;
    auto stored_value = copy_value();
    std::cout <<"stored_value="<< stored_value << std::endl;
    //At this moment,stored_value==1, and value==100
    //Because copy_value has copied when its was created.
}

void lambda_generic() {
    auto generic = [](auto x, auto y) {
    
        return x+y;
    };
    std::cout << generic(1,2) << std::endl;
    std::cout << generic(1.1,2.2) << std::endl;
    
}

void lambda_reference_implicit_capture() {
    int value = 1;
    auto copy_value = [&] {

        return value;
    };
    value = 100;
    auto stored_value = copy_value();
    std::cout <<"stored_value="<< stored_value << std::endl;
    //At this moment,stored_value==1, and value==100
    //Because copy_value has copied when its was created.
}

void lamdba_expression_capture() {
    //std::unique_ptr<int> important = std::make_unique<int>(1);
    auto important = std::make_unique<int>(1);
    auto add = [v1 = 1, v2 = std::move(important)](int x, int y) -> int {
    
        return x+y+v1+(*v2); //*v2 is the value
        
    };
    std::cout << add(3,4) << std::endl;
}
int main(int argc, char **argv) {
    lambda_value_capture();
    lambda_reference_capture();
    lambda_value_implicit_capture();
    lambda_reference_implicit_capture();
    lamdba_expression_capture();
    lambda_generic();
    return 0;
}
