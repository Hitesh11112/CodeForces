#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<pair<long long, long long>> arr;
  for (int ind = 0; ind < n; ++ind) {
    long long a, b;
    cin >> a >> b;
    arr.push_back({a, b});
  }


  sort(arr.begin(), arr.end());  
  long long cnt = 1;
  long long start = arr[0].first;
  long long end = arr[0].second;

  for (int ind = 1; ind < n; ++ind) {
    long long nStart = arr[ind].first;
    long long nEnd = arr[ind].second;

    if (nEnd <= end) {
      start = nStart;
      end = nEnd;
    } else if (nStart >= end) {
      cnt += 1;
      start = nStart;
      end = nEnd;
    }
  }
  cout << cnt << '\n';
}
