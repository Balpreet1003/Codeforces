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
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<vector<ll> > a(n, vector<ll>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ll x = LLONG_MAX;
            for (int k = 0; k < n && (i + k) < n; k++) {
                x = min(x, a[i + k][k]);
            }
            if (x < 0) ans += abs(x);
        }
        for (int i = 1; i < n; i++) {
            ll x = LLONG_MAX;
            for (int k = 0; k < n && (i + k) < n; k++) {
                x = min(x, a[k][i + k]);
            }
            if (x < 0) ans += abs(x);
        }
        cout << ans << endl;
    }

    return 0;
}