/* 班级 学号 姓名 */
#include <iostream>
using namespace std;

// 此程序并未做错误处理。你根据题目描述，改此程序。

int main()
{
    int x;

    while (1) {
        if(cin >> x){
            if( x >= 0 && x <= 100){
                //正常输入
                break;
            }else{
                cout<<"ERROR\n";
            }
        }else{
            //读取失败
            cout<<"ERROR\n";
            cin.clear();
            cin.ignore(999,'\n');
        }
    }

    cout << x << endl;

    return 0;
}
