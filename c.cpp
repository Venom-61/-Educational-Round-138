#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Number Game

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    int ans = 0;
    for(int k = 1; k <= n; k++) {
        multiset<int> s(a.begin(), a.end());
        for(int i = 0; i < k; i++) {
            auto it = s.lower_bound(k - i + 1);
            s.erase(--it);
            if()
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        // cout << "Case: #" << i << " ";
        solve();
    }

    return 0;
}
