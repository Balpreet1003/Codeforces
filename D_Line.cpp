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
#define all(a) (a).rbegin(), (a).rend()

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
            string s;
            cin>>s;

            
            ll sum=0;
            for(int i=0;i<n;i++){
                  if(s[i]=='L'){
                        sum+=i;
                  }
                  else{
                        sum+=(n-i-1);
                  }
            }

            vector<pair<ll,ll>>b(n);
            for(ll i=0;i<n;i++){
                  if(s[i]=='L'){
                        if(i<(n-i-1)){
                              b[i]={(n-i-1),i};
                        }
                        else {
                              b[i]={0,0};
                        }
                  }
                  else{
                        if((n-i-1)<i){
                              b[i]={i,(n-i-1)};
                        }
                        else {
                              b[i]={0,0};
                        }
                  }
            }
            sort(all(b));
            
            vi ans(n,0);
            for(ll i=0;i<n;i++){
                  sum=sum+b[i].first-b[i].second;
                  ans[i]=sum;
            }
            printvec(ans);
      }
      return 0;
}