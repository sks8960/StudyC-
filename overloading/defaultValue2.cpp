// 함수의 원형을 별도로 선언하는 경우, 매개변수의 디폴트 값은 함수의 원형 선언에만 위치해야함.
// int MyFunc(int a=10, b=20, c) 와 같이 우측 매개변수의 디폴트 값을 비우는 형태로는 불가
#include<iostream>

void MyFunc(int a=3, int b=5);

int main(){
    MyFunc();
    MyFunc(5);
    MyFunc(12, 13);
    return 0;
}

void MyFunc(int a, int b){
    int result = a+b;
    std::cout<<result<<std::endl;
}
