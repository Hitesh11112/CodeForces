#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m;
  cin >> n >> m;

  map<long long, long long> mp;
  for (int curr = 0; curr < n; ++curr) {
    int ele;
    cin >> ele;
    mp[ele] += 1;
  }

  vector<long long> arr2(m);
  for (auto &ele : arr2) {
    cin >> ele;
  }

  vector<long long> ans;
  auto get = [&](auto it) {
    long long ele = it->first;
    ans.push_back(ele);
    mp[ele]--;
    if (!mp[ele]) {
      mp.erase(it);
    }
  };

  for (int curr = 0; curr < m; ++curr) {
    long long ele1 = arr2[curr];
    auto it = mp.lower_bound(ele1);
    // not the last element
    if (it != mp.end()) {
      if (arr2[curr] == it->first) {
        get(it);
      } else if (it != mp.begin()) {
        --it;
        get(it);
      } else {
        ans.push_back(-1);
      }
    }
    // last element
    else {
      if (mp.empty()) {
        ans.push_back(-1);
        continue;
      }
      auto last = prev(mp.end());
      if (last->first <= arr2[curr]) {
        get(last);
      } else {
        ans.push_back(-1);
      }
    }
  }
  for (int curr = 0; curr < m; ++curr) {
    cout << ans[curr] << '\n';
  }
}
