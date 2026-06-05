/**
* author:  hitesh
* problem: factorial
**/

//** return type recursive factorial 

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   int num;
//   cin >> num;

//   function<int(int)> rec = [&](int i)  {
//     if(i == 1) return 1;
//     return i * rec(i-1);  
//   };

//   cout << rec(num) << '\n';
  
//   return 0;
// }

//** bottom up dp 
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long num; 
  cin >> num;
  
  vector<long long> dp(num+1,0);
  dp[1] = 1;

  for(long long idx = 2; idx <= num; ++idx) {
    dp[idx] = dp[idx-1] * idx;
  }
  
  cout << dp[num] << '\n';

  return 0;
}