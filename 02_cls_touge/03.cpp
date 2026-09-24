/* 计科2635 刘培锐 525714910036 */

#include <iostream>
// 不允许添加其他头文件
using namespace std;

// 不允许定义全局变量。

int main() {
    // 待分解的整数
    int number;
    cin >> number;
    
    int w = 0;
    int q = 0;
    int b = 0;
    int s = 0;
    int g = 0;
    
    // TODO: 你的代码。完成整数分解，并输出各个位。
    g = number % 10;
    number /= 10;
    s = number % 10;
    number /= 10;
    b = number % 10;
    number /= 10;
    q = number % 10;
    number /= 10;
    w = number % 10;
    number /= 10;

    cout << "万位 : "<<w << endl;
    cout << "千位 : "<<q << endl;
    cout << "百位 : "<<b << endl;
    cout << "十位 : "<<s << endl;
    cout << "个位 : "<<g << endl;

    return 0;
}
