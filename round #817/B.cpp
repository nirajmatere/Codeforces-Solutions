#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

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
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        int flag = 0;
        for(int i=0;i<a.length();i++){
            if((a[i] == 'R' && b[i] == 'B') || ((a[i] == 'R' && b[i] == 'G'))
             || (a[i] == 'B' && b[i] == 'R') || (a[i] == 'G' && b[i] == 'R')){
                cout<<"NO"<<endl;
                flag = 1;
                break;
             }
        }
        if(flag == 0) cout<<"YES"<<endl;
    }
    return 0;
}