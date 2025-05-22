#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<unordered_map>
#include <algorithm>
#include<set>
#include <numeric>
//#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
struct cmd{
    bool operator()(pair<ll,ll>a,pair<ll,ll>b){
        if(a.first==b.first)return a.second<b.second;  
        return a.first<b.first;  
    }
};


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll T;
    cin>>T;
    while (T--) {
        ll n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i=0;i<n;i++)cin>>a[i];

        unordered_map<ll,ll>m;
        priority_queue<pair<ll,ll>, vector<pair<ll,ll> >,cmd >pq;
        for(int i=0;i<n;i++){
            m[a[i]]++;
            pq.push(make_pair(m[a[i]],i));
            b[i]=a[pq.top().second];
        }

        for (int i=0;i<b.size();i++)cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}