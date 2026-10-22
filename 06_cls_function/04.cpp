/* 计科2635 刘培锐 525714910036 */
#include <iostream>
// 不需要其他头文件。
using namespace std;

#define for ERROR

int main() {
    int arr[101] = {};

    int grades;
    cin >> grades;
    while(grades != -1){
        arr[grades] ++;
        cin >> grades;
    }

    int i = 1;
    grades = 100;
    while(grades >= 0){
        int people_num = arr[grades];
        if(people_num){
            int x = 1;
            while(x <= people_num){
                cout<<grades<<" "<<i<<endl;
                x++;
            }
            i += people_num;
        }
        grades --;
    }
    return 0;
}
