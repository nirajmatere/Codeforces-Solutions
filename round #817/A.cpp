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
        string s;
        cin>>s;
        if(n != 5){
            cout<<"NO"<<endl;
            continue;
        }

        int sum = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'T'){
                sum = sum + 10;
            }
            else if(s[i] == 'i'){
                sum += 10;
            }
            else if(s[i] == 'm'){
                sum += 10;
            }
            else if(s[i] == 'u'){
                sum += 10;
            }
            else if(s[i] == 'r'){
                sum += 10;
            }
        }
        if(sum == 50){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}