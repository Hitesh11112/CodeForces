#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> arr(n), arr2(n + 1, 0);
  for (long long &ele : arr) {
    cin >> ele;
  }

  long long cnt = 0;
  for (long long ele : arr) {
    if ((arr2[ele - 1] == 0) || ele == 1) {
      cnt += 1;
      arr2[ele] = 1;
      arr2[ele - 1] = 1;
    } else if (arr2[ele - 1]) {
      arr2[ele] = 1;
    }
  }
  cout << cnt << '\n';
}