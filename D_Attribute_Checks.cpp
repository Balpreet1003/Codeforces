//#include <bits/stdc++.h>
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
        vector<int>a;
        int m,n;
        cin>>n>>m;
        for(int i=0;i<n;i++)cin>>a[i];

        unordered_map<int,int>mp;
        int ans=0;

        for (int i = 0; i < n; i++)mp[a[i] % m]++;

        for (int i=0;i<n;i++) {
            for (int j = i + 1; j < n; j++) {
                int x=(m - (a[i] % m + a[j] % m))%m;
                if (mp.find(x) != mp.end()) {
                    ans += mp[x];
                }
            }
        }
        cout<<ans/6<<endl;
    }
    return 0;
}