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
    while (t--) {
        string p,s;
        cin>>p;
        cin>>s;

        if(s==p){
            cout<<"YES"<<endl;
            continue;
        }
        vector<pair<ll,char>>a,b;
        pair<ll,char>p1={1,p[0]};
        for(int i=1;i<p.length();i++){
            if(p[i]==p[i-1]){
                p1.first++;
            }else{
                a.push_back(p1);
                p1.second=p[i];
                p1.first=1;
            }
        }
        a.push_back(p1);
        p1={1,s[0]};
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                p1.first++;
            }else{
                b.push_back(p1);
                p1.second=s[i];
                p1.first=1;
            }
        }
        b.push_back(p1);
        int j=0;
        bool flag=true;
        if(a.size()!=b.size()){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<b.size();i++){
            auto [x1, y1] = a[i];
            auto [x2, y2] = b[i];
            if(y1==y2){
                if(x1>x2){
                    flag=false;
                    break;
                }
                else if(x2>(2*x1)){
                    flag=false;
                    break;
                }
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}