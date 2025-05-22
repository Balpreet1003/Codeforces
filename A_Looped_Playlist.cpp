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
      ll n, p;
      cin>>n>>p;
      vi a(2*n);
      cinvec(a,n);

      ll sum=accumulate(all(a),0LL);
      ll ans= (p/sum)*n;
      p = p%sum;

      for(int i=n;i<2*n;i++)a[i]=a[i-n];

      ll currSum=0;
      ll startInd, j=0, ans1=n+1;

      for(ll i=0;i<n;i++){
            while(currSum<p){
                  currSum+=a[j];
                  j++;
            }
            ll len=j-i;
            if(ans1>len){
                  ans1=len;
                  startInd=i;
            }

            currSum-=a[i];
      }
      cout<<startInd+1<< " " << ans+ans1<<endl;

      return 0;
}