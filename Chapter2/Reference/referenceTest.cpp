#include <iostream>
using namespace std;
void Swap(int &val1, int &val2){
    int tmp = val1;
    val1 = val2;
    val2 = tmp;
}

int main(){
    int num1=5;
    int *ptr1=&num1;
    int num2=10;
    int *ptr2=&num2;

    Swap(*ptr1, *ptr2);
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;
    return 0;
}