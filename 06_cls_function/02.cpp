#include <iostream>
using namespace std;

#define for ERROR // 本作业不要用 for 循环。要用 while 循环。

int main() {

    int arr[101] = {};

    int i = 1;

    while(i <= 100){
        int cnt = i;
        while(cnt <= 100){
            //整数倍
            if(cnt % i == 0 ){
                //异或
                arr[cnt]^= 1;
            }
            cnt ++;
        }
        i++;
    }

    i = 0;
    while( i <= 100){
        if(arr[i]){
            cout<<i<<" ";
        }
        i++;
    }
    
    return 0;
}