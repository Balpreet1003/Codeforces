#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)cin >> a[i];

        unordered_map<ll, int> m;
        ll x = 0;
        int ans = 0;        
        m[0] = 0;  
        int y = -1; 
        for (int i = 0; i < n; i++) {
            x += a[i];
            
            if (m.count(x)) {
                y = max(y, m[x]);
                ans++;
                m.clear();
                m[0] = i + 1;
                x = 0;
            } else {
                m[x] = i + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}