#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define db double

ll getOddCount(ll x){
    if(x&1)return (x/2)+1;
    return x/2;
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll x=getOddCount(n);
        ll y=getOddCount(n-k);
        if(n==k){
            if(x&1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            continue;
        }
        if((x&1) && (y&1))cout<<"YES"<<endl;
        else if((x&1) && !(y&1))cout<<"NO"<<endl;
        else if(!(x&1) && (y&1))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}