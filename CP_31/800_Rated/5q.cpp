#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(auto& index: arr) cin >> index;

        if(arr[0] != 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}