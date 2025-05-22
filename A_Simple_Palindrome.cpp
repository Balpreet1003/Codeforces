#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define ld long double
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        ll x=n;
        string s="",a="aeiou";
        for(ll i=0;i<n;i++){
            s+=a[i%5];
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}