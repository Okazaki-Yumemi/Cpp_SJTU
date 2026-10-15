/* 525714910036 刘培锐 cs */
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    for(int i = 2 ; i <= 1000 ; i++){
        int check = 0 ;
        //边界情况
        for(int j = 1 ; j < i ; j++){
            if(i % j == 0){
                check += j;
            }
        }
        if(check == i){
            //确定
            std::cout<<i<<", its factors are "<<1;
            for(int j = 2 ; j < i ; j++){
                if(i % j == 0){
                    std::cout<<", "<<j;
                }
            }
            std::cout<<endl;
        }
    }

    return 0;
}
