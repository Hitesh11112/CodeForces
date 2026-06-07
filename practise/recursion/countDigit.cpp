/**
* author:  Hitesh Patwal
* problem: countDigit using recursion
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num; 
  cin >> num;

  if(num == 0) {
    cout << 1 << '\n';
    return 0;
  }
  function<int(int)> rec = [&](int num){
    if(num == 0) return 0;
    return 1 + rec(num/10);
  };

  cout << rec(num) << '\n';

  return 0;
}