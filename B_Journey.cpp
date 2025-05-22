#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>


#define ll long long
#define ld long double
#define db double

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
        ll n,a,b,c;
        cin>>n>>a>>b>>c;

        ll ans=(n/(a+b+c))*3;
        ll rem=(n%(a+b+c));

        while(rem>0){
            ans++;
            rem-=a;
            if(rem<=0)break;
            ans++;
            rem-=b;
            if(rem<=0)break;
            ans++;
            rem-=c;
            if(rem<=0)break;
        }
        cout<<ans<<endl;
    }
    return 0;
}