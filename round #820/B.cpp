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
        vector<char> ans;
        stack<char> st;
        for(int i=0;i<n;i++){
            st.push(s[i]);
        }
        while(st.size() != 0){
            char x = st.top();
            if(x == '0'){
                st.pop();
                char f = st.top();
                st.pop();
                char l = st.top();
                st.pop();
                int num = (l-48)*10 + (f-48) + 96;
                ans.push_back(num);
            }
            else{
                int number = int(x) - 48;
                number = number + 96;
                ans.push_back(number);
                st.pop();
            }
        }
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i];
        }
        cout<<endl;

    }
    return 0;
}