/* 525714910036 刘培锐 cs */
#include <iostream>
#include <iomanip>  // 如果你会用这个，可以用。
#include <chrono>
// 不允许添加其他头文件。
using namespace std;


// 设为 1，程序结尾将显示你的算法用了多长时间。
// 仅供本地研究。
// 提交到头歌的版本应将此宏设为 0。
#define MEASURE_PERFORMANCE 0


// 不允许使用全局变量。


int main() {
#if MEASURE_PERFORMANCE
    auto timeBeg = chrono::high_resolution_clock::now();
#endif



    // TODO: 你的代码。
    int cnt = 0;

    for (int a = 123; a <= 987; a++) {
        for (int b = a + 1; b <= 987; b++) {
            int c = 1953 - a - b;

            if (c <= b || c > 987) continue;

            int used = 0;
            bool valid = true;

            // 检查 a、b、c，不让用数组就用bit掩码
            for (int i = 0; i < 3; i++) {
                int x;
                if (i == 0) x = a;
                else if (i == 1) x = b;
                else x = c;

                // 检查当前三位数的每一位
                for (int j = 0; j < 3; j++) {
                    int digit = x % 10;
                    x /= 10;

                    int bit = 1 << digit;

                    if (digit == 0 || (used & bit)) {
                        valid = false;
                        break;
                    }

                    used |= bit;
                }

                if (!valid) break;
            }

            if (valid) {
                cnt++;
                cout<<"No." << setw(3) << cnt << " : "
                    << a << " + " << b << " + "
                    << c << " = 1953\n";
            }
        }
    }

    cout << "total=" << cnt << '\n';



#if MEASURE_PERFORMANCE
    auto timeEnd = chrono::high_resolution_clock::now();
    long milliseconds = chrono::duration_cast<chrono::milliseconds>(timeEnd - timeBeg).count();
    cout << "运行用时：" << milliseconds << " 毫秒" << endl;
#endif
    return 0;
}
