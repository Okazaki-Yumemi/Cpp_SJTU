#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,q,e;

    cin>>t>>n>>q>>e;
    bool error = false;

    if(t < 0 || t > 120){
        error = true;
    }
    if( n < 0 || n > 2){
        error = true;
    }

    if(!((q == 0) || (q == 1))){
        error = true;
    }
    
    if(!((e == 0) || (e == 1))){
        error = true;
    }

    if(error){
        cout<<"数据错误"<<endl;
        return 0;
    }



    if(e){
        if(t <= 20){
            cout<<"续座成功"<<endl;
            return 0;
        }else{
            if(t <= 30 && !q){
                //没人等
                cout<<"允许补签"<<endl;
                return 0;
            }else{
                n ++;
                if(n >= 3){
                    cout<<"暂停预约"<<endl;
                    return 0;
                }else{
                    cout<<"座位已释放"<<endl;
                }
            }
        }
    }else{
        if(t <= 30){
            cout<<"续座成功"<<endl;
            return 0;
        }else{
            if(t <= 40 && !q){
                //没人等
                cout<<"允许补签"<<endl;
                return 0;
            }else{
                n ++;
                if(n >= 3){
                    cout<<"暂停预约"<<endl;
                    return 0;
                }else{
                    cout<<"座位已释放"<<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}