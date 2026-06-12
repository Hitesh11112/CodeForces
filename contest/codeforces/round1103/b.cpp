#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  
  while(t--) {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int get = 1;
    int count1 = 0;
    vector<long long> arr(k+1,0);
    
    for(long long idx = 0; idx < n; ++idx) {
      if(s[idx] == '1') arr[idx%k] +=1;
    }
    
    for(int idx = 0; idx < k; ++idx) {
      if(arr[idx] % 2 != 0) {
        get = 0;
        break;
      } 
    }

    if(!get) cout << "NO\n";
    else cout << "YES\n";
  }

  return 0;
}