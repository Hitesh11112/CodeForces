#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n); 
        for(auto& index : arr) cin >> index;
        
        map<int,int> mp;
        for(int index =0; index <n; ++index) {
            mp[arr[index]] +=1;
            if(mp.size() > 2) break;
        }
        if( mp.size() > 2) {
            cout << "No\n";
        }
        else if(mp.size() <= 1 || n == 2 ) {
            cout << "Yes\n";
        }else {
            auto it = mp.begin();
            int first = it->second;
            ++it;
            int second = it->second;

            if(abs(first-second) <= 1){
                cout << "Yes\n";
            }else {
                cout << "No\n";
            }
        }
    }
    return 0;
} 
