#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long num;
    cin >> num;

    int small = 1;
    int large = num * 3;
    for (int i = 1; i <= num; i++) {
      cout << small << ' ' << large-1 << ' ' << large << ' ';
      small++;
      large -= 2;
    }
    cout << endl;
  }
  return 0;
}