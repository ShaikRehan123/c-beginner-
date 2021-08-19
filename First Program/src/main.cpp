#include <iostream>
int main(){
    int firstnumber;
    int secondnumber;
    std::cout << "Enter First Number : " << std::endl;//This is First Number
    std::cin >> firstnumber;
    std::cout << "Enter Second Number : " << std::endl;//This is Second Number
    std::cin >> secondnumber;
    std::cout << "Sum : " << firstnumber + secondnumber << std::endl;
    std::cout << "Diff : " << firstnumber - secondnumber << std::endl;
    std::cout << "Product : " << firstnumber * secondnumber << std::endl;
    std::cout << "Division : " << firstnumber / secondnumber << std::endl;
    return 0;
}
/* */