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

bool get_bit(ll n,ll y){
      return ((n>>y)&1);
}
ll change_bit_to_one(ll n, ll y){
      ll ans=((1<<y)|n);
      return ans;
}

ll change_bit_to_zero(ll n, ll y){
      return n & ~(1<<y);
}


int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n,q;
      cin >> q>> n;
      ll k=n, len=0;
      while(k){
            len++;
            k/=2;
      }
      while (q--) {
            ll x,y;
            cin>>x>>y;
            if(x==1){
                  cout<<get_bit(n,y)<<endl;
            }
            else if(x==2){
                  n=change_bit_to_one(n,y);
                  cout<<n<<endl;
            }
            else if(x==3){
                  n=change_bit_to_zero(n,y);
                  cout<<n<<endl;
            }
            else if(x==4){
                  if(get_bit(n,y)){
                        n=change_bit_to_zero(n,y);
                        cout<<n<<endl;
                  }
                  else {
                        n=change_bit_to_one(n,y);
                        cout<<n<<endl;
                  }
            }
      }
      return 0;
}