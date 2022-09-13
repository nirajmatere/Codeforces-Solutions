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

        for(int i=0;i<n;i++){
            int flag = 0;
            for(int j=0;j<n;j++){
                if(a[i] == b[j]){
                    flag++;
                    break;
                }
            }
            for(int j=0;j<n;j++){
                if(a[i] == c[j]){
                    flag++;
                    break;
                }
            }
            if(flag == 0){
                sum1 = sum1 + 3;
            }
            else if(flag == 1){
                sum1 = sum1 + 1;
            }
        }
        for(int i=0;i<n;i++){
            int flag = 0;
            for(int j=0;j<n;j++){
                if(b[i] == a[j]){
                    flag++;
                    break;
                }
            }
            for(int j=0;j<n;j++){
                if(b[i] == c[j]){
                    flag++;
                    break;
                }
            }
            if(flag == 0){
                sum2 = sum2 + 3;
            }
            else if(flag == 1){
                sum2 = sum2 + 1;
            }
        }
        for(int i=0;i<n;i++){
            int flag = 0;
            for(int j=0;j<n;j++){
                if(c[i] == a[j]){
                    flag++;
                    break;
                }
            }
            for(int j=0;j<n;j++){
                if(c[i] == b[j]){
                    flag++;
                    break;
                }
            }
            if(flag == 0){
                sum3 = sum3 + 3;
            }
            else if(flag == 1){
                sum3 = sum3 + 1;
            }
        }

        cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    }
    return 0;
}