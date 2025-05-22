#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
#include<unordered_map>
#include<set>
#include <numeric>
// #include <bits/stdc++.h>
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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>a(m),q(k);
        for(int i=0;i<m;i++)cin>>a[i];
        for(int i=0;i<k;i++)cin>>q[i];
        
        unordered_map<ll,ll>m1;
        for(int i=0;i<k;i++){
            m1[q[i]]++;
        }
        unordered_map<ll,ll>m2;
        for(int i=1;i<=n;i++){
            if(m1.find(i)==m1.end())m2[i]=1;
        }
        vector<ll>ans(m);
        if(m2.size()>1){
            for(int i=0;i<m;i++)ans[i]=0;
        }
        else if(m2.size()==0){
            for(int i=0;i<m;i++)ans[i]=1;
        }
        else {
            for(int i=0;i<m;i++){
                if(m2.find(a[i])!=m2.end()){
                    ans[i]=1;
                }
                else ans[i]=0;
            }
        }
        for(ll i:ans)cout<<i;
        cout<<endl;
        
    }
    return 0;
}