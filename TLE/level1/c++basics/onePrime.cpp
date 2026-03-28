#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<int> arr(n + 1, 1);
  arr[0] = arr[1] = 0;
  for (long long curr = 2; curr * curr <= n; ++curr) {
    if (arr[curr]) {
      for (long long i = curr * curr; i <= n; i += curr) {
        arr[i] = 0;
      }
    }
  }
  if (arr[n])
    cout << "YES\n";
  else
    cout << "NO\n";
}