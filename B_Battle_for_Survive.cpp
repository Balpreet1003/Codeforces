#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define db double

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        ll sum=0;
        for(ll i=0;i<(n-2);i++)sum+=a[i];
        cout<<(a[n-1]-(a[n-2]-sum))<<endl;
    }
    return 0;
}