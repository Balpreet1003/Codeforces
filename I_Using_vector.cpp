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
      ll n,q;
      cin>>n>>q;
      vi a(n);
      cinvec(a,n);
      while(q--){
            string s;
            cin>>s;
            if(s=="pop_back"){
                  a.pop_back();
            }
            else if(s=="front"){
                  cout<<a[0]<<endl;
            }
            else if(s=="back"){
                  cout<<a[a.size()-1]<<endl;
            }
            else if(s=="sort"){
                  ll x,y;
                  cin>>x>>y;
                  sort(a.begin()+x-1,a.begin()+y);
            }
            else if(s=="reverse"){
                  ll x,y;
                  cin>>x>>y;
                  reverse(a.begin()+x-1,a.begin()+y);
            }
            else if(s=="print"){
                  ll x;
                  cin>>x;
                  cout<<a[x-1]<<endl;
            }
            else {
                  ll x;
                  cin>>x;
                  a.push_back(x);
            }
      }
      return 0;
}