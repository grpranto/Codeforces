#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[1001], b[1001];
    int lenA, lenB;
    cin >> a >> b;


    lenA = strlen(a); lenB = strlen(b);
    bool flag = true;

    if(lenA == lenB){
        for(int i=0; i<lenA; i++){
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
                if(b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u'){
                    flag = false;
                    break;
                }
            }
            else {
                if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){
                    flag = false;
                    break;
                }
            }
        }
    }
    else{
        flag = false;
    }

    if(flag == true){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }


    return 0;
}
