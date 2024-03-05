#include <iostream>

int main(){

    int n = 5;
    int num;
    int sum=0;

    for(int i = 0; i < n; i++){
        std::cout << i<<"번째 정수 입력 : ";
        std::cin>>num;
        sum += num;
    }
    std::cout << "합계:"<<sum << std::endl;
}