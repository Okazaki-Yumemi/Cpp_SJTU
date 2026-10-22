/* 计科2635 刘培锐 525714910036 */

#include <iostream>
using namespace std;

#define for ERROR

int main() {

    int arr[101] = {};

    int grades;
    cin >>grades;
    while(grades != -1){
        arr[grades]++;
        cin >>grades;
    }

    int  i = 100;
    while(i >= 0){
        if(arr[i]){
            cout<<i<<" "<<arr[i]<<endl;
        }
        i--;
    }


    return 0;
}