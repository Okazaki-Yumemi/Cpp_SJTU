/*计科2635 刘培锐 525714910036 */

#include <iostream>
// 不允许添加其他头文件
using namespace std;

#define PI 3.14  // 圆周率

int main() {
    cout << "请输入半径和高度" << endl;
    
    double r, h;  // 分别是半径和高度。

    // TODO: 输入 r 和 h 的值
    cin>>r>>h;

    // 注：需要额外计算过程（含定义新变量）的，允许在此处写。
    double cir = 2 * PI * r;
    double area = PI * r * r;
    double surface = (4 )* PI * r * r;
    double x = (float)4 / (float)3 ;
    double volume =  x * PI * r * r *r ;
    double volume_2 = PI * r * r * h;


    cout << "圆周长     : " << cir<< endl;  // 注意看，此处冒号是英文冒号，前后各有1个空格。这样比较美观。
    cout << "圆面积     : " << area << endl;
    cout << "圆球表面积 : " << surface << endl;
    cout << "圆球体积   : " << volume<< endl;
    cout << "圆柱体积   : " <<volume_2 << endl;
  
    return 0;
}
