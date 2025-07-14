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
        for(int i=0; i < n; ++i) {
            cin >> arr[i];
        }
        if(n == 1) {
            cout << 1 << '\n' << arr[0] << '\n';
        } else {
            int flag =0;
            vector<int> nums;
            nums.push_back(arr[0]);

            for(int i = 1; i < n; ++i) {
                if(arr[i] < arr[i-1] ) {
                    nums.push_back(1);
                    nums.push_back(arr[i]);
                    flag = 1;
                }
                else{
                    nums.push_back(arr[i]);
                }
            }
            cout << nums.size() << '\n';
            for(auto i: nums) cout << i << ' ';cout << '\n';
        }
    }
    return 0;
} 
