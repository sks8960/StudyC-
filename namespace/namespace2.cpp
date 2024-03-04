#include <iostream>

namespace BestCom1{
    void SimpleFunc();
}

namespace BestCom1{
    void PrettyFunc();
}

namespace ProgCom1{
    void SimpleFunc();
}

void BestCom1::SimpleFunc(){
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc();
    ProgCom1::SimpleFunc();
}

void BestCom1::PrettyFunc(){
    std::cout << "So Pretty!!" << std::endl;
}

void ProgCom1::SimpleFunc(){
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}

int main(){
    BestCom1::SimpleFunc();
    return 0;
}