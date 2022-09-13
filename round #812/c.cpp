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

long long findsq(long long n){
    long long p=0;
    while(p*p < n){
        p++;
    }
    return p;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;  
        for(int i=0;i<n;i++){
            v.push_back(i);
        }
        reverse(v.begin(),v.end());
        vector<int> p; 
        long long q = findsq(n);
        int i = 0;
        int breaker = n;
        while(q){
            int b = q*q;  
            int x = b - v[i];
            // cout<<"breaker = "<<breaker<<endl;
            while(x < breaker && i< v.size()){
                // cout<<"x = "<<x<<endl;
                p.push_back(x);
                i++;
                x = b - v[i];
            }
            x = b - v[i-1];
            // printVector(p);
            breaker = b - x;
            q--;
        }
        if(breaker == 1){
            p.push_back(0);
        }
        reverse(p.begin(),p.end());
        printVector(p);
    }
    return 0;
}