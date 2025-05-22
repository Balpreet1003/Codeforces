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
        string s,t;
        cin>>s>>t;
        ll i=0,j=0,n=s.length(),m=t.length();
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;j++;
            }
            else break;
        }
        ll ans=0;
        if(i!=0)ans+=(i+1);
        cout<<ans+(n-i)+(m-j)<<endl;
    }
    return 0;
}