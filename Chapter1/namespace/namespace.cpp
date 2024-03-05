#include <iostream>

namespace BestCom1{
    void SimpleFunc(){
        std::cout << "BestCom" << std::endl;
    }
}

namespace ProgCom1{
    void SimpleFunc(){
        std::cout << "ProgCom" << std::endl;
    }
}

int main(){
    BestCom1::SimpleFunc();
    ProgCom1::SimpleFunc();
    return 0;
}