#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 100005;

// Precompute binomial coefficients using the wrong formula (1D DP)
void calculate_binomial_coefficients(vector<vector<int> >& C, int max_n) {
    for (int n = 0; n <= max_n; n++) {
        C[n][0] = 1; // C[n][0] is always 1
        C[n][n] = 1; // C[n][n] is always 1
        for (int k = 1; k < n; k++) {
            C[n][k] = (C[n][k - 1] + C[n - 1][k - 1]) % MOD;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    vector<int> n(t), k(t);
    int max_n = 0;

    // Input all the pairs and find the maximum value of n
    for (int i = 0; i < t; i++) {
        cin >> n[i];
        max_n = max(max_n, n[i]);
    }
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }

    // Precompute binomial coefficients up to max_n using a 2D table
    vector<vector<int> > C(max_n + 1, vector<int>(max_n + 1, 0));
    calculate_binomial_coefficients(C, max_n);

    // Output the result for each query
    for (int i = 0; i < t; i++) {
        cout << C[n[i]][k[i]] << '\n';
    }

    return 0;
}
