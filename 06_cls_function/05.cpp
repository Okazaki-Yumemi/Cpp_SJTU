/* cs2635 刘培锐 525714910036 */
#include <iostream>
#include <math.h>
using namespace std;


int main() {
    
    const char* number_to_digit[] = {
        "零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖"
    };

    double money;

    cin >> money;

    if(money == 0){
        cout<<"零圆整"<<endl;
        return 0;
    }

    double cents = floor(money * 100 + 0.5);

    int yi = int(cents/ 10000000000.0);
    int wan = int(fmod(cents,10000000000.0) / 1000000.0);

    int yuan =  int(fmod(cents,1000000.0) / 100.0);

    int jiao = int(fmod(cents,100.0) / 10.0);
    int fen = int(fmod(cents, 10.0));

    int yi_shi = yi / 10;
    int yi_ge = yi% 10 ;

    int wan_qian = wan / 1000;
    int wan_bai = (wan / 100)% 10;
    int wan_shi = (wan / 10) % 10;
    int wan_ge = (wan - wan_shi * 10 - wan_bai * 100 - wan_qian * 1000);


    int qian = yuan / 1000;
    int bai = (yuan / 100)% 10;
    int shi = (yuan / 10) % 10;
    int ge = (yuan - qian * 1000 - bai * 100 - shi * 10);

    //开始做亿的输出
    // 记录前面是否有最高位置
    bool has_output = false;
    //前面有0
    bool iszero = false;
    
    if(yi_shi != 0){
        cout<< number_to_digit[yi_shi];
        cout << "拾";
        has_output = true;
    }

    if(yi_ge == 0){
        if(has_output) iszero = true;
    }else{
        if(iszero) cout<<"零";
        iszero = false;

        cout<< number_to_digit[yi_ge];
        has_output = true;
    }
    if (yi != 0) cout << "亿";

    iszero = false;
    //万
    if (wan_qian == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        
        cout<< number_to_digit[wan_qian];
        cout << "仟";
        has_output = true;
    }

    if (wan_bai == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        iszero = false;

        cout<< number_to_digit[wan_bai];
        cout << "佰";
        has_output = true;
    }

    if (wan_shi == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        iszero = false;

        cout<< number_to_digit[wan_shi];
        cout << "拾";
        has_output = true;
    }

    if (wan_ge == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        iszero = false;

        cout<< number_to_digit[wan_ge];
        has_output = true;
    }

    if (wan != 0) cout << "万";
    iszero = false;

    // 圆

    if (qian == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        iszero = false;

        cout<< number_to_digit[qian];
        cout << "仟";
        has_output = true;
    }

    if (bai == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        iszero = false;

        cout<< number_to_digit[bai];
        cout << "佰";
        has_output = true;
    }

    if (shi == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        iszero = false;

        cout<< number_to_digit[shi];
        cout << "拾";
        has_output = true;
    }

    if (ge == 0) {
        if (has_output) iszero = true;
    } else {
        if (iszero) cout << "零";
        iszero = false;

        cout<< number_to_digit[ge];
        has_output = true;
    }

    if(yuan != 0 || wan != 0 || yi != 0){
        cout << "圆";
    }
    

    // 角
    if (jiao != 0) {
        cout<< number_to_digit[jiao];
        cout << "角";
    }

    //分

    if (fen != 0) {
        if ((yi != 0 || wan != 0 || yuan != 0)&&(jiao == 0)) cout << "零";

        cout<< number_to_digit[fen];
        cout << "分";
    }

    if(fen == 0){
        cout<<"整";
    }

    cout<<"\n";

    return 0;
}
