#include <bits/stdc++.h>
using namespace std;

long long getGcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return getGcd(b, a % b);
}

long long getLcm(long long a, long long b) {
  long long lcm = (a / getGcd(a, b)) * b;
  return lcm;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long test;
  cin >> test;

  while (test--) {
    long long n;
    cin >> n;
    long long pos = 1;
    vector<long long> pre(n);
    for (auto &i : pre) {
      cin >> i;
    }
    vector<long long> suff(n);
    for (auto &i : suff) {
      cin >> i;
    }
    for (long long index = 1; index < n; ++index) {
      if ((pre[index - 1] % pre[index]) != 0) {
        pos = 0;
        break;
      }
    }
    for (long long index = n - 2; index >= 0; --index) {
      if ((suff[index + 1] % suff[index]) != 0) {
        pos = 0;
        break;
      }
    }
    if (pos == 0) {
      cout << "NO\n";
      continue;
    }

    long long arr[n];
    for (long long index = 0; index < n; ++index) {
      arr[index] = getLcm(pre[index], suff[index]);
    }

    long long val = arr[0];
    for (long long index = 0; index < n; ++index) {
      val = getGcd(val, arr[index]);
      if (val != pre[index]) {
        pos = 0;
        break;
      }
    }

    val = arr[n - 1];
    for (long long index = n - 1; index >= 0; --index) {
      val = getGcd(val, arr[index]);
      if (val != suff[index]) {
        pos = 0;
        break;
      }
    }

    if (pos == 0) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}