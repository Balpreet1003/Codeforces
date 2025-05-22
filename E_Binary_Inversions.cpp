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
            ll ans=0,ol=0,oR=0,zl=0,zr=0;
            vector<vector<ll>>b(n,vector<ll>(4,0));

            for(int i=n-1;i>=0;i--){
                  b[i][1]=oR;
                  b[i][3]=zr;
                  if(a[i]==0)zr++;
                  else{
                        ans+=zr;
                        oR++;
                  }
            }
            for(int i=0;i<n;i++){
                  b[i][0]=ol;
                  b[i][2]=zl;
                  if(a[i]==0)zl++;
                  else ol++;
            }

            ll curr=ans;

            for(int i=0;i<n;i++){
                  if(a[i]==0) ans=max(ans,curr-b[i][0]+b[i][3]);
                  else ans=max(ans,curr-b[i][3]+b[i][0]);
            }

            
            cout<<ans<<endl;
      }
      return 0;
}