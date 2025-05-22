#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
// #include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

ll Min(ll a,ll b){
    if(a<b)return a;
    return b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll T;
    cin>>T;
    while (T--) {
        ll n;
        cin>>n;
        
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        
        ll ans=0;
        for(int i=0;i<n;i++){
            if(i==n-1)ans+=a[i];
            else if(a[i]>b[i+1])ans+=(a[i]-b[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}