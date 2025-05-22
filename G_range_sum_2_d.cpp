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
      ll n,m,q;
      cin>>n>>m>>q;
      vector<vector<ll>>a(n,vector<ll>(m));
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  cin>>a[i][j];
            }
      }
      for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                  a[i][j]+=a[i][j-1];
            }
      }
      for(int j=0;j<m;j++){
            for(int i=1;i<n;i++){
                  a[i][j]+=a[i-1][j];
            }
      }
      for(int i=0;i<q;i++){
            ll x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;

            ll sum=a[x2-1][y2-1];

            if(x1-1>0){
                  sum-=a[x1-2][y2-1];
            }
            if(y1-1>0){
                  sum-=a[x2-1][y1-2];
            }
            if((x1-1>0) && (y1-1>0)){
                  sum+=a[x1-2][y1-2];
            }
            cout<<sum<<endl;
      }
      return 0;
}