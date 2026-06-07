/**
* author:  hites
* problem: reverse a string recursively 
**/


#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; 
  cin >> s;
  int n = s.length();
  function<void(int)> rec = [&](int index){
    if(index < 0) return;
    cout << s[index];
    rec(index-1);
  };

  rec(n-1);

  return 0;
}