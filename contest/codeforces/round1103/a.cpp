#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; 
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(auto &ele : arr) cin >> ele;

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(auto ele : arr) {
      minVal = min(minVal, ele);
      maxVal = max(maxVal, ele);
    }
    if(minVal == maxVal) cout << 1 << '\n';
    else cout << maxVal - minVal + 1 << '\n';
  }

  return 0;
}