#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cards(n);
        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }
        sort(cards.begin(), cards.end());
        unordered_map<int, int> freq;
        int maxCards = 0, distinct = 0, left = 0;
        for (int right = 0; right < n; right++) {
            if (freq[cards[right]] == 0) {
                distinct++;  
            }
            freq[cards[right]]++;  

            while (distinct > k) {
                freq[cards[left]]--;  
                if (freq[cards[left]] == 0) {
                    distinct--;  
                }
                left++;  
            }
            if (right > 0 && (cards[right] == cards[right - 1] || cards[right] == cards[right - 1] + 1)) {
                maxCards = max(maxCards, right - left + 1);
            }
        }

        cout << maxCards << endl; 
    }

    return 0;
}