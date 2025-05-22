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
      deque<ll>dq;
      while (t--) {
            string s;
            cin>>s;
            if(s=="push_back") {
                  ll x;
                  cin>>x;
                  dq.push_back(x);
            }
            else if(s=="push_front") {
                  ll x;
                  cin>>x;
                  dq.push_front(x);
            }
            else if(s=="pop_back") {
                  dq.pop_back();
            }
            else if(s=="pop_front") {
                  dq.pop_front();
            }
            else if(s=="front") {
                  cout<<dq.front()<<endl;
            }
            else if(s=="back") {
                  cout<<dq.back()<<endl;
            }
            else {
                  ll x;
                  cin>>x;
                  cout<<dq[x-1]<<endl;
            }
      }
      return 0;
}