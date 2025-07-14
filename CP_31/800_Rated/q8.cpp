#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test ; cin >> test;
    while(test--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for(int i=0; i <n; ++i) {
            cin >> arr[i];
        }
        auto it = find(arr.begin(),arr.end(),k);
        if(it == arr.end()) {
            cout << "No\n";
        }else {
            cout << "Yes\n";
        }
    }
    return 0;
} 
