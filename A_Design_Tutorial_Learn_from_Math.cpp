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

vector<bool> sieve(ll n){
      vector<bool> ans(n+1,true);
      for(int p=2;p*p<=n;p++){
            if(ans[p]){
                  for(int i=p*p;i<=n;i+=p){
                        ans[i]=false;
                  }
            }
      }
      return ans;
}

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n;
      cin>>n;
      vector<bool> prime=sieve(n);      
      for(int i=4;i<n;i++){
            if(!prime[n-i] && !prime[i]){
                  cout<<i<<" "<<n-i<<endl;
                  break;
            }
      }
      return 0;
}