#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,a,b,d;
        cin>>n>>m>>a>>b>>d;
        if((a-d <= 1 && a+d >= n) || (b-d <= 1 && b+d >= m) || (b+d >= m && a+d >= n) || (b-d <= 1 && a-d <= 1)){
            cout<<-1<<endl;
        }
        else{
            cout<<n + m - 2<<endl;
        }
    }
    return 0;
}