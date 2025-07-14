#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test; 
    cin >> test;
    
    while(test--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int sum = 0;
        for(int i=0; i < n-1; ++i) {
            cin >> arr[i];
            sum +=arr[i];
        }
        cout << -1 * sum << '\n';
    }
    return 0;
} 
