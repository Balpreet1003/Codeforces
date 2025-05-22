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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int initialDisturbance = 0;
        int first = -1, last = -1;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                initialDisturbance++;
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        if (initialDisturbance == 0) {
            cout << 0 << endl;
            continue;
        }
        if (last - first <= 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}