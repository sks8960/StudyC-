#include <iostream>
using namespace std;

void Swap(int &num1, int &num2) {
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main(){
    int val1 = 10;
    int val2 = 20;

    Swap(val1, val2);
    cout<<"val1:"<<val1<<endl;
    cout<<"val2:"<<val2<<endl;
    return 0;
}