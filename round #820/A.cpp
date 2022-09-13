#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long int 

void printVector(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
            ll p = abs(a - 1);
            ll q = abs(c-b) + abs(c - 1);
            if(p<q) cout<<1<<endl;
            else if(p == q){
                cout<<3<<endl;
            }
            else{
                cout<<2<<endl;
            }
    }
    return 0;
}