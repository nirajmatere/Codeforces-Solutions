#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v;
        while(n--){
            long long x;
            cin>>x;
            v.push_back(x);
        }
        long long min=INT_MAX,flag=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]<=min){
                min = v[i];
            }
            if(v[i+1]>min){
                flag = 1;
                break;
            }
        }


        if(flag == 1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
              
    }
    return 0;
}