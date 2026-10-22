#include <iostream>
using namespace std;

#define for ERROR // 本次作业不要用 for。要用 while 做循环。

int main() {
    int arr[21];
    int i = 0;
    int x = 0;

    while(i < 20){
        cin >> x;
        arr[i] = x;
        i++;
    }

    cin >> x;
    i = 0;
    while( i < 20){
        cout<<arr[i]<<" ";
        i++;
    }
    i = 0;
    cout<<endl;

    bool first_time = true;
    while(i < 20){
        //遍历
        if(arr[i] < x){
            cout <<arr[i]<<" ";
            i++;
            continue;
        }else{
            if(arr[i] >= x && first_time){
                //输出x
                cout<<x<<" ";
                first_time = false;
                //指针不移动
            }else{
                cout << arr[i]<<" ";
                first_time = false;
                i++;
            }
        }
    }
    if(first_time){
        cout<<x;
    }

    return 0;
}