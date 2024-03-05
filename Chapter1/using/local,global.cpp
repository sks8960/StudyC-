#include <iostream>

int val = 100;

void SimpleFunc(){
    int val=20;
    val+=2; // 지역변수 val값 증가 -> 22
    ::val+=7; // 전역변수 val값 증가 -> 107
}
