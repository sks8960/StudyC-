// 매개변수 default 값
#include<iostream>


void MyFunc(int a = 3, int b=5){
    int result = a+b;
    std::cout<<result<<std::endl;
}

int main(){
    MyFunc();
    MyFunc(5);
    MyFunc(12, 13);
    return 0;
}
