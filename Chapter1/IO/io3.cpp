#include <iostream>

int main(){
    char name[100];
    char lang[200];

    std::cout<<"이름은 무엇입니까? :"<<std::endl;
    std::cin>>name;
    
    std::cout<<"좋아하는 프로그래밍 언어는 무엇입니까? : "<<std::endl;
    std::cin>>lang;

    std::cout<<"내 이름은 "<<name<<"입니다."<<std::endl;
    std::cout<<"내가 좋아하는 프로그래밍 언어는 : "<<lang<<"입니다."<<std::endl;

    return 0;

}