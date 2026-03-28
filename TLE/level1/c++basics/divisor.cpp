#include <bits/stdc++.h>
using namespace std;

int main() {
  long long num;
  cin >> num;
  for (int curr = 1; curr <= num / 2; ++curr) {
    if (num % curr == 0) {
      cout << curr << '\n';
    }
  }
  cout << num << '\n';
}