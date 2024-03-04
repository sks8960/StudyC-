#include <iostream>

int main(){
    int num1, num2;
    int sum = 0;
    std::cout<<"숫자 2개 입력 :"<<std::endl;
    std::cin>>num1>>num2;

    if(num1<num2){
        for(int i = num1+1; i<num2; i++){
            sum += i;
        }
    }else{
        for(int i = num2+1; i<num1; i++){
            sum += i;
        }
    }
    std::cout<<"두 수 사이의 합 : "<<sum<<std::endl;

    return 0;

}