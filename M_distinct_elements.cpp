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
void cinvec(vector<T>& vec, ll& n) {
      unordered_map<ll,ll>m;
      for(int i = 0; i < n; ++i) {
            ll x;
            cin >> x;

            if(m.find(x)==m.end()){
                  vec.push_back(x);
                  m[x]=1;
            }
      }
}

template<typename T>
void printvec(const vector<T>& vec) {
      for (const auto& x : vec) {
            cout << x << ' ';
      }
      cout << endl;
}

int bs(vi &a,ll &x){
      int i=0,j=a.size()-1;
      while(i<=j){
            int mid=(i+j)/2;
            if(a[mid]==x)return mid;
            else if(a[mid]<x)i=mid+1;
            else j=mid-1;
      }
      return -1;
}

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      
      ll n,q;
      cin>>n>>q;
      set<ll>st;
      for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            st.insert(x);
      }
      vi a;
      for(auto i:st)a.push_back(i);

      while(q--){
            ll x;
            cin>>x;

            auto ans1=lower_bound(all(a),x)-a.begin();
            auto ans2=upper_bound(all(a),x)-a.begin();

            cout<<ans1<<" ";
            cout<<a.size()-ans2<<endl;

      }

      return 0;
}