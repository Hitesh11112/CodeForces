#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  long long temp = 0;
  if (arr[0] != 1) {
    cout << 1 << '\n';
    return 0;
  }
  for (int i = 0; i < n; i++) {
    if (temp + 1 < arr[i]) {
      cout << temp + 1;
      return 0;
    }
    temp += arr[i];
  }
  cout << temp + 1 << '\n';
}
