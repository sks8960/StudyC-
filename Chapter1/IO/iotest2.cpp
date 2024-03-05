#include <iostream>

int main(){
    int payday = 50;
    int sell, result;

    while(1){
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end) :";
        std::cin>>sell;
        if(sell<=-1){
            std::cout<<"프로그램을 종료합니다."<<std::endl;
            break;
        }
        result = payday + sell*0.12;
        std::cout<<"이번 달 급여 :"<<result<<std::endl;
    }
}