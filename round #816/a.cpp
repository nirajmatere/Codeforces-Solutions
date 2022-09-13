#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n == 1 && m == 1){
            cout<<0<<endl;
            continue;
        }
        int a = min(n,m);
        int ans = (n+m)+a-2;
        cout<<ans<<endl; 

    }
    return 0;
}