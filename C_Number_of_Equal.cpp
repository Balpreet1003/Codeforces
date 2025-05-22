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
void cinvec(vector<T>& vec, int n, unordered_map<T,T>&m) {
      //vec.resize(n);
      for(int i = 0; i < n; ++i) {
            ll x;
            cin>>x;
            if(m.find(x)==m.end())vec.pb(x);
            m[x]++;
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
      ll n,m;
      cin>>n>>m;
      vi a, b;
      unordered_map<ll,ll>m1,m2;
      cinvec(a,n,m1);
      cinvec(b,m,m2);

      ll ans=0;
      ll i=0,j=0;
      while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                  ans+=(m1[a[i]]*m2[b[j]]);
                  i++;j++;
            }
            else if(a[i]>b[j]){
                  j++;
            }
            else {
                  i++;
            }
      }
      cout<<ans<<endl;

      return 0;
}