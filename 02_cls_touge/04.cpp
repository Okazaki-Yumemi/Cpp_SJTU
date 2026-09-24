/* 计科2635 刘培锐 525714910036 */

// 本题不允许使用 if while for 函数等后续知识。

#include <iostream>
// 不允许添加其他头文件
using namespace std;

// 不允许定义全局变量。

int main() {
    // 待分解的浮点数

    double number;
    cin >> number;
    
    
    // TODO: 你的代码。完成整数分解，并输出各个位。
    int sy = 0;
    int y = 0;
    int qw = 0;
    int bw = 0;
    int sw = 0;
    int w = 0;
    int q = 0;
    int b = 0 ;
    int s = 0;
    int yuan = 0;
    int j = 0;
    int f = 0;
    
    number *= 100;
    long long  number1 = number;

    f = number1 % 10;
    number1 /= 10;

    j = number1 % 10;
    number1 /= 10;

    yuan = number1 % 10;
    number1 /= 10;

    s = number1 % 10;
    number1 /= 10;

    b = number1 % 10;
    number1 /= 10;

    q = number1 % 10;
    number1 /= 10;

    w = number1 % 10;
    number1 /= 10;

    sw = number1 % 10;
    number1 /= 10;

    bw = number1 % 10;
    number1 /= 10;

    qw = number1 % 10;
    number1 /= 10;

    y = number1 % 10;
    number1 /= 10;

    sy = number1 % 10;
    number1 /= 10;


    cout<<"十亿位 : "<<sy <<endl;
    cout<<"亿位 : "<<y <<endl;
    cout<<"千万位 : "<<qw <<endl;
    cout<<"百万位 : "<<bw <<endl;
    cout<<"十万位 : "<<sw <<endl;
    cout<<"万位 : "<<w <<endl;
    cout<<"千位 : "<<q <<endl;
    cout<<"百位 : "<<b <<endl;
    cout<<"十位 : "<<s <<endl;
    cout<<"圆 : "<<yuan <<endl;
    cout<<"角 : "<<j <<endl;
    cout<<"分 : "<<f <<endl;

    return 0;
}
