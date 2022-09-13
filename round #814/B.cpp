#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k%2 == 1){
            cout<<"YES"<<endl;
            for(ll i=1;i<n;i=i+2){
                cout<<i<<" "<<i+1<<endl;
            }
        }
        else{
            if(k%4==0){
                cout<<"NO"<<endl;
            }
            else{
                ll flag = 0;
                cout<<"YES"<<endl;
                for(ll i=1;i<n;i=i+2){
                    if(flag%2 == 0){
                        cout<<i+1<<" "<<i<<endl;
                    }
                    else{
                        cout<<i<<" "<<i+1<<endl;
                    }
                    flag++;
                }
                
            }
        }
    }
    return 0;
}