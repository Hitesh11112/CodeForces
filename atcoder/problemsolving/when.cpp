#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  int quo = k / 60, rem = k % 60;

  cout << 21 + quo << ":" << setw(2) << setfill('0') << rem << endl;
}