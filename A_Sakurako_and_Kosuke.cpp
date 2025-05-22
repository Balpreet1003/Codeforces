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
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int x = 0;
        int move = 1;
        bool flag = true;
        
        while (true) {
            if (flag) {
                x -= move;
            } else {
                x += move; 
            }            
            if (x < -n || x > n) {
                if (flag) {
                    cout << "Sakurako" << endl;
                } else {
                    cout << "Kosuke" << endl;
                }
                break;
            }            
            flag = !flag;
            move += 2;
        }
    }
    return 0;
}