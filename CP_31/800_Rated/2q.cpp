#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, x ; cin >> n >> x;
        vector<int> arr(n);

        for(auto&index : arr) cin >> index;
        int maxLen = arr[0] - 0;

        for(int index = 1; index < n; ++index) {
            maxLen = max(maxLen,arr[index]-arr[index-1]);
        }
        maxLen = max(maxLen,2*(x - arr[n-1]));
        cout << maxLen <<'\n';
    }
    return 0;
}