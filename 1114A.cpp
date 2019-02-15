#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z, g ,p, b;
    long long sum = 0, tot = 0;
    bool flag = true;

    cin >> x >> y >> z >> g >> p >> b;
    tot = g + p + b;

    if(g >= x){
        g -= x;
        sum += x;
        if(g+p >= y){
            sum += y;
            if(tot-sum < z){
                flag = false;
            }
        }
        else{
            flag = false;
        }
    }
    else{
        flag = false;
    }

    if(flag == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}
