#include<iostream>

void MyFunc(){
    std::cout<<"MyFunc(void) called"<<std::endl;
}

void MyFunc(char c){
    std::cout<<"MyFunc(char c) called"<<std::endl;
}

void MyFunc(int a, int b){
    std::cout<<"MyFunc(int a, int b) called"<<std::endl;
}

int main(){
    MyFunc();            // void MyFunc() 호출
    MyFunc('A');         // char c를 인자로 받는 MyFunc(char c) 호출
    MyFunc(12, 13);      // int a와 int b를 인자로 받는 MyFunc(int a, int b) 호출
    return 0;
}
