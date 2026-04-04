#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while (t--) {
    vector<long long> arr(7);
    long long cntodd = 0, cntevn = 0;
    for (auto &ele : arr) {
      cin >> ele;
    }
    sort(arr.begin(), arr.end());
    long long sump = 0;
    for (int ind = 0; ind <= 5; ++ind) {
      sump += (arr[ind]);
    }
    sump = -sump + arr[6];
    cout << sump << endl;
  }
  return 0;
}