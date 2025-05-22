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
      
      ll n,k;
      cin>>n>>k;
      vi a(n);
      cinvec(a,n);
      unordered_map<ll,ll>m;

      ll ans=0,sum=0,i=0;
      for (ll j = 0; j < n; ++j) {
            m[a[j]]++;

            while (m.size() > k) {
                  m[a[i]]--;
                  if (m[a[i]] == 0)
                  m.erase(a[i]);
                  i++;
            }

            ans += (j - i + 1);
      }
            
      cout<<( ans )<<endl;

      return 0;
}