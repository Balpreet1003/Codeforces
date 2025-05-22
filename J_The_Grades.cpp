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

static bool cmd(pair<string,ll>&a, pair<string, ll>&b){
      if(a.second==b.second)return a.first<b.first;
      return a.second>b.second;
}

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n;
      cin>>n;
      vector<pair<string, ll>>a(n,{"",0});
      unordered_map<string , vector<ll>>m;

      for(int i=0;i<n;i++){
            ll w,x,y,z;
            cin>>a[i].first;
            cin>>w>>x>>y>>z;
            a[i].second=w+x+y+z;

            m[a[i].first].push_back(w);
            m[a[i].first].push_back(x);
            m[a[i].first].push_back(y);
            m[a[i].first].push_back(z);
      }

      sort(a.begin(),a.end(),cmd);

      for(int i=0;i<n;i++){
            string s=a[i].first;
            cout<<s<<" "<<a[i].second<<" ";
            for(int j=0;j<4;j++){
                  cout<<m[s][j]<<" ";
            }
            cout<<endl;
      }

      return 0;
}