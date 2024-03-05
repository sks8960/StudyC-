#include <iostream>
using namespace std;

namespace Hybrid{
    void HyFunc(){
        cout<<"So simple function"<<endl;
        cout<<"In namespace Hybrid"<<endl;
    }
}

int main(){
    using Hybrid::HyFunc;
    HyFunc();
    return 0;
}