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
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll ans=0;
        if(m>a){
            ans+=a;
            ans+=min(c,m-a);
            c-=min(c,m-a);
        }
        else {
            ans+=m;
        }
        if(m>b){
            ans+=b;
            ans+=min(c,m-b);
            c-=min(c,m-b);
        }
        else {
            ans+=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}