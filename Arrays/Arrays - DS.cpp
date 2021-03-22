#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int ary[10000];
    cin>>num;
    //cout<<num;
    for(int i= 0; i<num; i++){
        cin>>ary[i];
        //cout<<ary[i]<<" ";
    }
    for(int j=num-1; j>=0; j--){
        cout<<ary[j]<<" ";
    }
}
