#include<iostream>
using namespace std;

int main(){
    int n, cube[101], sub;
    bool flag = false;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> cube[i];
    }

    while(flag == false){
        flag = true;
        for(int i=0; i<n-1; i++){
            if(cube[i] > cube[i+1]){
                flag = false;
                sub = cube[i] - cube[i+1];
                cube[i] = cube[i] - sub;
                cube[i+1] = cube[i+1] + sub;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(i == n-1){
            cout << cube[i] << endl;
        }
        else{
            cout << cube[i] << " ";
        }
    }

    return 0;
}
