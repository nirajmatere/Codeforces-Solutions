#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        string s = s1+s2;
        int sum = 0;
        for(int i=0;i<s.size();i++){
            int freq = 0;
            for(int j=0;j<s.size();j++){
                if(s[i] == s[j]){
                    freq++;
                }
            }
            sum += freq;
        }
        if(sum == 4){
            cout<<3<<endl;
        }
        else if(sum == 6){
            cout<<2<<endl;
        }
        else if(sum == 8){
            cout<<1<<endl;
        }
        else if(sum == 10){
            cout<<1<<endl;
        }
        else if(sum == 16){
            cout<<0<<endl;
        }
    }

    return 0;
}