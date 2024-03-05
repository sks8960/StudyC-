#include <iostream>

int main(){
    int num1, num2;
    std::cout<<"첫번째 수 입력 :"<<std::endl;
    std::cin>>num1;

    std::cout<<"두번째 수 입력 :"<<std::endl;
    std::cin>>num2;
    int result = num1 + num2;

    std::cout<<"두 수의 합 : "<<result<<std::endl;

    return 0;

}