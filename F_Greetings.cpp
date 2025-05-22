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
            ll x,y;
            cin>>x>>y;
            vec[i]=y-x;
      }
}

template<typename T>
void printvec(const vector<T>& vec) {
      for (const auto& x : vec) {
            cout << x << ' ';
      }
      cout << endl;
}

ll ans=0;
void merge_vector(vector<ll>& a, ll l, ll mid, ll r){
    ll n = mid - l + 1;
    ll m = r - mid;

    vector<ll> b(n), c(m);
    for (int i = 0; i < n; i++) b[i] = a[l + i];
    for (int j = 0; j < m; j++) c[j] = a[mid + 1 + j];

    ll i = 0, j = 0, k = l;
    while (i < n && j < m){
        if (b[i] <= c[j]){
            a[k++] = b[i++];
        }
        else{
            a[k++] = c[j++];
            ans += (n - i); 
        }
    }
    while (i < n) a[k++] = b[i++];
    while (j < m) a[k++] = c[j++];
}

void merge_sort(vector<ll>& a, ll l, ll r){
    if (l >= r) return;
    ll mid = (l + r) / 2;
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);
    merge_vector(a, l, mid, r);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<pair<ll, ll>> people(n);
        for (int i = 0; i < n; ++i){
            cin >> people[i].first >> people[i].second;
        }

        sort(people.begin(), people.end()); 

        vector<ll> end_positions;
        for (auto p : people){
            end_positions.push_back(p.second);
        }

        ans = 0;
        merge_sort(end_positions, 0, n - 1);

        cout << ans << endl;
    }
    return 0;
}