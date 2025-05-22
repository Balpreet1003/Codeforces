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

bool isPossible(vi& a,ll k){
      ll j=k;
      for(ll i=2*k-2; j>0;i--,j--){
            if(a[i]>j)return false;
      }
      return j==0;
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
            sort(all(a));

            ll l=0,r=(n+1)/2,ans=0;
            while(l<=r){
                  ll mid=(l+r)/2;
                  if(isPossible(a,mid)){
                        ans=mid;
                        l=mid+1;
                  }
                  else {
                        r=mid-1;
                  }
            }
            cout<<ans<<endl;
      }
      return 0;
}