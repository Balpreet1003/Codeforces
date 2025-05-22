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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll suma = accumulate(a.begin(), a.end(), 0ll);
        x = suma - x;
        y = suma - y;
    
        sort(a.begin(), a.end());
        ll res = 0;
    
        for(int i = 0; i < n; ++i){
            int l = lower_bound(a.begin(), a.end(), y - a[i]) - a.begin();
            int r = upper_bound(a.begin(), a.end(), x - a[i]) - a.begin();
            res += max(0, r - l);
            if((l <= i) && (i < r)){    // i lies in the range [l, r - 1]
                --res;
            }
        }
    
        // each pair is counted twice
        res /= 2;
    
        cout << res << '\n';
        
    }
    return 0;
}