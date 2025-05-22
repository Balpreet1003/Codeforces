#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while (t--) {
        int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x: a) cin >> x;
    // Binary search for minimal k
    ll left = 0;
    ll right = a[n-1] - a[0];
    if(n%2==1){
    left = 1;
    }
    // Function to check if possible with k
    auto possible = [&](ll k) -> bool{
    // Greedy pairing
    int count =0;
    int i=0;
    while(i <n-1){
    if(a[i+1]-a[i] <=k){
    count++;
    i +=2;
    }
    else{
    i +=1;
    }
    }
    if(n%2==0){
    return count >= n/2;
    }
    else{
    if(count < n/2){
    return false;
    }
    // Find the unpaired element
    // Greedy pairing from left, the last element is unpaired if n is odd
    // To find p, simulate the pairing
    i=0;
    while(i <n-1){
    if(a[i+1]-a[i] <=k){
    i +=2;
    }
    else{
    i +=1;
    }
    }
    ll p;
    if(i ==n-1){
    p = a[n-1];
    }
    else{
    // This should not happen as count >=floor(n/2)
    p = a[n-1];
    }
    // Find minimal d such that p-d not in list or p+d not in list
    // Using binary_search
    ll d=1;
    while(true){
    bool found=false;
    if(p - d >=0){
    // Check if p-d is not in the list
    if(!binary_search(a.begin(), a.end(), p-d)){
    found=true;
    }
    }
    if(p + d <= 1000000000000000000LL){
    if(!binary_search(a.begin(), a.end(), p+d)){
    found=true;
    }
    }
    if(found){
    break;
    }
    d++;
    // To prevent infinite loop, although unlikely
    if(d > 1000000) break;
    }
    return d <=k;
    }
    };
    // Binary search
    while(left < right){
    ll mid = left + (right - left)/2;
    if(possible(mid)){
    right = mid;
    }
    else{
    left = mid +1;
    }
    }
    // After binary search, check left
    cout << left << "\n";
    }
    return 0;
}