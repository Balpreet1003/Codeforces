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
      
      int n,query;
      cin>>n>>query;
      
      string txt;
      cin>>txt;
      
      int x,y,pos;
      
      
      while(query--){
      
      string op;
      cin>>op;
      
      if(op=="pop_back"){
            txt.pop_back();
      }
      else if(op=="front"){
            cout<<txt.front()<<endl;
      }
      else if(op=="back"){
            cout<<txt.back()<<endl;
      }
      else if(op=="sort")
      {
            cin>>x>>y;
            if(x>y) swap(x,y);
      
            sort(txt.begin()+x-1,txt.begin()+y);
      }
      else if(op=="reverse")
      {
            cin>>x>>y;
            if(x>y) swap(x,y);
            reverse(txt.begin()+x-1,txt.begin()+ y);
      }
      else if(op=="print")
      {
            cin>>pos;
            cout<<txt[pos-1]<<endl;
      }
      else if(op=="substr")
      {
            cin>>x>>y;
            if(x>y) swap(x,y);
      
            string ans=txt.substr(x-1,(y-x)+1);
            cout<<ans<<endl;
      }
      else{
            char v;
            cin>>v;
            txt.push_back(v);
      }
      
      }
      
      return 0;
}