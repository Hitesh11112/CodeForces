/**
* author:  hitesh
* problem: power(n,x)
**/

//recursive solution
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  //power(2,2) = 2 * * 2  
  int num, x;
  cin >> num >> x;
  
  function<int(int)> rec = [&](int x){
    if(x == 0) return 1;
    return num * rec(x-1);
  };
  
  cout << rec(x) <<'\n';

  return 0;
}