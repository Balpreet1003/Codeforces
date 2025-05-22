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
      
      ll n1,n2,n3,n4;

      cin>>n1;
      vi a1(n1);
      cinvec(a1,n1);

      cin>>n2;
      vi a2(n2);
      cinvec(a2,n2);
      
      cin>>n3;
      vi a3(n3);
      cinvec(a3,n3);
      
      cin>>n4;
      vi a4(n4);
      cinvec(a4,n4);

      sort(all(a1));
      sort(all(a2));
      sort(all(a3));
      sort(all(a4));

      vi ans;

      ll i=0,j=0,k=0,l=0, diff=INT_MAX;
      while(i<n1 && j<n2 && k<n3 && l<n4){
            ll mini=min(a1[i],min(a2[j],min(a3[k],a4[l])));
            ll maxi=max(a1[i],max(a2[j],max(a3[k],a4[l])));

            if(diff>(maxi-mini)) {
                  ans={a1[i],a2[j],a3[k],a4[l]};
                  diff=maxi-mini;
            }

            if(a1[i]==mini)i++;
            else if(a2[j]==mini)j++;
            else if(a3[k]==mini)k++;
            else l++;
      }
      printvec(ans);

      return 0;
}