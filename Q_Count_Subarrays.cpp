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
            cin>>n;
            vi a(n);
            cinvec(a,n);
            ll cnt=1;
            vi b;
            for(int i=1;i<n;i++){
                  if(a[i]>=a[i-1])cnt++;
                  else{
                        b.push_back(cnt);
                        cnt=1;
                  }
            }  
            b.pb(cnt);
            ll ans=0;
            for(ll i:b){
                  ans+=((i*(i+1))/2);
            }
            cout<<ans<<endl;
      }
      return 0;
}