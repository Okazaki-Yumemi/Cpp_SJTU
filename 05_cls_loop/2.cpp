/* 525714910036 刘培锐 cs */
#include <iostream>
using namespace std;
int main()
{
    for(int i = 1 ; i <= 9 ; i++){
        for(int j = 1; j <= i ; j++){
            std::cout<<j<<"x"<<i<<"="<<i*j;
            std::cout<<'\t';
        }
        std::cout<<'\n';
    }
    return 0;
}
