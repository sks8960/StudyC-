#include<iostream>

template <typename T>
inline T SQUARE(T x){
    return x*x;
}

int main(){
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    std::cout<<SQUARE(2.5)<<std::endl;

    return 0;
}

//타입스크립트의 제네릭과 같은 역할