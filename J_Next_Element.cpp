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
      ll n;
      cin>>n;
      vi a(n);
      cinvec(a,n);
      vi ans(n,-1);
      stack<pair<ll,ll>>st;
      st.push({a[n-1],n});
      for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top().first<=a[i])st.pop();
            if(st.empty())ans[i]=-1;
            else ans[i]=st.top().second;
            st.push({a[i],i+1});
      }
      ll q;
      cin>>q;
      while(q--){
            ll x;
            cin>>x;
            cout<<ans[x-1]<<endl;
      }

      return 0;
}