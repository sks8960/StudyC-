#include<iostream>

inline int SQUARE(int x){
    return x*x;
}

int main(){
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    std::cout<<SQUARE(2.5)<<std::endl; // 템플릿을 사용하지 않으면 데이터 손실 발생

    return 0;
}