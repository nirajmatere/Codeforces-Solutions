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
        vector<string> a,b,c;
        for(int j=0;j<n;j++){
            string s;
            cin>>s;
            a.push_back(s);
        }
        for(int j=0;j<n;j++){
            string s;
            cin>>s;
            b.push_back(s);
        }
        for(int j=0;j<n;j++){
            string s;
            cin>>s;
            c.push_back(s);
        }
        ll sum1=0,sum2=0,sum3=0;
        unordered_map<string,int> m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            m[b[i]]++;
        }
        for(int i=0;i<c.size();i++){
            m[c[i]]++;
        }

        for(int i=0;i<a.size();i++){
            if(m[a[i]] == 1){
                sum1 += 3;
            }
            else if(m[a[i]] == 2){
                sum1 += 1;
            }
        }

        for(int i=0;i<b.size();i++){
            if(m[b[i]] == 1){
                sum2 += 3;
            }
            else if(m[b[i]] == 2){
                sum2 += 1;
            }
        }

        for(int i=0;i<c.size();i++){
            if(m[c[i]] == 1){
                sum3 += 3;
            }
            else if(m[c[i]] == 2){
                sum3 += 1;
            }
        }

        cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;

    }
    return 0;
}