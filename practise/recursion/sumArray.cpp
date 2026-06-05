/**
* author:  hitesh
* problem: sum of array 
**/

//recursive solution
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  
  vector<int> arr(n,0);
  for(auto &ele : arr) cin >> ele;

  function<int(int)> rec = [&](int idx){
    if(idx == n) return 0;
    return arr[idx] + rec(idx+1);
  };
  
  cout << rec(0) << '\n';
  return 0;
}