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

static bool cmd(pair<ll,ll>&a , pair<ll,ll>&b){
      if(a.first==b.first)return a.second<b.second;
      return a.first<b.first;
}

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      
      ll n;
      cin>>n;


      vector<pair<ll,ll>>a(n,{0,0});
      for(int i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
      }

      sort(all(a),cmd);\

      ll l=a[0].first,r=a[0].second;
      for(int i=1;i<n;i++){
            if(r<a[i].first){
                  cout<<l<<" "<<r<<endl;
                  l=a[i].first;
                  r=a[i].second;
            }
            else{
                  r=max(r,a[i].second);
            }
      }
      cout<<l<<" "<<r<<endl;

      return 0;
}