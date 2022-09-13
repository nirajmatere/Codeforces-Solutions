#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%2 == 0){
            if(m%2 == 0){
                cout<<"Tonya"<<endl;
            }
            else{
                cout<<"Burenka"<<endl;
            }
        }
        else{
            if(m%2 == 0){
                cout<<"Burenka"<<endl;
            }
            else{
                cout<<"Tonya"<<endl;
            }
        }
    }
    return 0;
}