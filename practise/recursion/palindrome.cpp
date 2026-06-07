/**
* author:  hitesh
* problem: pallindrome using recursion
**/

//** top down dp 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   string s; 
//   cin >> s;

//   int n = s.length();
//   vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

//   function<bool(int, int)> rec = [&](int front, int back) {
//     if(front >= back) return true;
//     if(dp[front][back] != -1) return dp[front][back];

//     if(s[front] != s[back]) dp[front][back] = false;
//     return dp[front][back] = rec(front+1,back-1);
//   };

//   cout << rec(0,n-1) << '\n';

//   return 0;
// }

