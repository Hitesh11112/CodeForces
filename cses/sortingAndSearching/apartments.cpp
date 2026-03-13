#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, k;
  cin >> n >> m >> k;

  vector<long long> arr(n);
  for (auto &ele : arr) cin >> ele;
  
  sort(arr.begin(),arr.end());
  map<long, long> mp;
  for (int i = 0; i < m; ++i) {
    long long a;
    cin >> a;
    mp[a] += 1;
  }

  long long cnt = 0;
  for (auto &ele : arr) {
    long long currEle = ele - k;
    auto it = mp.lower_bound(currEle);
    if (it != mp.end()) {
      if (it->first <= ele + k) {
        it->second -= 1;
        if (it->second == 0)
          mp.erase(it->first);
        cnt += 1;
      }
    }
  }
  cout << cnt << '\n';
}