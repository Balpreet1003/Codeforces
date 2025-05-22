#include<iostream>
#include<vector>
#include<string>
//#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll T;
    cin>>T;
    while (T--) {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='p')s[i]='q';
            else if(s[i]=='q')s[i]='p';
        }
        int i=0,j=s.length()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
        cout<<s<<endl;
    }
    return 0;
}