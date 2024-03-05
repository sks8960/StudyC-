#include <iostream>
using namespace std;

bool IsPositive(int num){
    if(num<=0)
        return false;
    else
        return true;
}

int main(){
    bool isPos;
    int num;
    cout<<"Input Number : ";
    cin>>num;

    isPos = IsPositive(num);
    if(isPos){
        cout<<"Positive Number"<<endl;
    }else{
        cout<<"Negative Number"<<endl;
    }

    int test1 = true; // 1저장
    int test2 = false; // 0저장
    cout<<test1<<endl;
    cout<<test2<<endl;
}