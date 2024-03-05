#include <iostream>
#include <cstring>
using namespace std;

typedef struct
{
    int id;
    char name[20];
    int balance;
}Account;

Account Arr[100];
int Arrnum = 0;

void createAccount(){
    int id, balance;
    char name[20];
    cout<<"[계좌개설]"<<endl;
    cout<<"계좌ID: ";
    cin>>id;
    cout<<"이 름 : ";
    cin>>name;
    cout<<"입금액 : ";
    cin>>balance;
    cout<<endl;

    Arr[Arrnum].id = id;
    Arr[Arrnum].balance = balance;
    strcpy(Arr[Arrnum].name, name);
    Arrnum++;
}

void deposit(){
    int money;
    int id;
    cout<<"[입  금]"<<endl;
    cout<<"계좌ID : ";
    cin>>id;
    cout<<"입금액 : ";
    cin>>money;
    for(int i=0; i<Arrnum; i++){
        if(Arr[i].id == id){
            Arr[i].balance += money;
            cout<<"입금 완료"<<endl<<endl;
            return ;
        }
    }
    cout<<"유효하지 않은 id 입니다."<<endl;   
}

void withdraw(){
    int money;
    int id;
    cout<<"[출금]"<<endl;
    cout<<"계좌ID : ";
    cin>>id;
    cout<<"출금액 : ";
    cin>>money;
    for(int i=0; i<Arrnum; i++){
        if(Arr[i].id == id){
            if(Arr[i].balance<money){
                cout<<"잔액이 부족합니다."<<endl;
                return;
            }
            Arr[i].balance-=money;
            cout<<"출금완료"<<endl<<endl;
            return;
        }
    }
    cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}

void InformAccount(){
    for(int i=0; i<Arrnum; i++){
        cout<<"계좌 ID : "<<Arr[i].id<<endl;
        cout<<"이 름 : "<<Arr[i].name<<endl;
        cout<<"잔 액 : "<<Arr[i].balance<<endl;
    }
}

int EndProgram(){
    cout<<"EndProgram"<<endl;
    return 0;
}

void StartProgram(){
    cout<<"-----Menu------"<<endl;
    cout<<"1. 계좌개설"<<endl;
    cout<<"2. 입 금"<<endl;
    cout<<"3. 출 금"<<endl;
    cout<<"4. 계좌정보 전체 출력"<<endl;
    cout<<"5. 프로그램 종료"<<endl;
}

int main(){
    while(1){
        int choice;
        StartProgram();
        cout<<"선택 :";
        cin>>choice;
        cout<<endl;

        switch (choice){
        case 1:
            createAccount();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            InformAccount();
            break;
        case 5:
            return 0;                        
        default:
            break;
        }
    }
    
}