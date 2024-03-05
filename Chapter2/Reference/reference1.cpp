#include<iostream>
using namespace std;

//참조자는 무조건 변수를 참조해야함
int main(){
    int num1=1020;
    int &num2 = num1;

    num2= 3047;
    cout<<"VAL : "<<num1<<endl;
    cout<<"REF : "<<num2<<endl;

    cout<<"VAL : "<<&num1<<endl;
    cout<<"REF : "<<&num2<<endl;
    return 0;
    // int &num2 = 1020; 오류 발생
    // int &num2; 오류 발생
    // int &num2 = NULL; 오류 발생
}