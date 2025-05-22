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
      ll n;
      cin >> n;

      ll totalWidth = 2 * n - 1;

      // Upper half
      for (int i = 1; i < n; i++) {
            ll stars = 2 * i - 1;
            ll spaces = (totalWidth - stars) / 2;
            for (int j = 0; j < spaces; j++) cout << " ";
            for (int j = 0; j < stars; j++) cout << "*";
            cout << endl;
      }

      // Middle double line
      for (int k = 0; k < 2; k++) {
            for (int j = 0; j < totalWidth; j++) cout << "*";
            cout << endl;
      }

      // Lower half
      for (int i = n - 1; i >= 1; i--) {
            int stars = 2 * i - 1;
            int spaces = (totalWidth - stars) / 2;
            for (int j = 0; j < spaces; j++) cout << " ";
            for (int j = 0; j < stars; j++) cout << "*";
            cout << endl;
      }

      return 0;
}