#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <numeric>
#include <limits>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <list>
#include <tuple>
#include <cstring>
#include <cfloat>
#include <climits>

#define ll long long
#define pb push_back
#define ld long double
#define vi vector<long long>
using namespace std;

#define sza(x) ((long long)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

template<typename T>
void cinvec(vector<T>& vec, int n) {
      vec.resize(n);
      for(int i = 0; i < n; ++i) {
            cin >> vec[i];
      }
}

template<typename T>
void printvec(const vector<T>& vec) {
      for (const auto& x : vec) {
            cout << x << ' ';
      }
      cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi a;
        cinvec(a, n);

        sort(all(a));

        vi b;
        ll i = 0, j = n/2;
        while (i < n/2 && j<n) {
            b.pb(a[i++]);
            b.pb(a[j++]);
        }
        if (i == j) b.pb(a[i]);

        // Check if valid wave
        bool flag = true;
        for (int i = 0; i < n; i++) {
            ll left = b[(i - 1 + n) % n];
            ll right = b[(i + 1) % n];
            if (!((b[i] > left && b[i] > right) || (b[i] < left && b[i] < right))) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
            printvec(b);
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}