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
      vi diff(n,0);

      vector<vector<int>>qur(q,vector<int>(3));
      for(int i=0;i<q;i++){
            cin>>qur[i][0]>>qur[i][1]>>qur[i][2];
            diff[qur[i][0]-1]+=qur[i][2];
            if(qur[i][1]<n)diff[qur[i][1]]-=qur[i][2];
      }
      a[0]+=diff[0];
      cout<<a[0]<<" ";
      for(int i=1;i<n;i++){
            diff[i]+=diff[i-1];
            a[i]+=diff[i];
            cout<<a[i]<<" ";
      }
      cout<<endl;
      return 0;
}