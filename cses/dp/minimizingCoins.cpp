// #include <bits/stdc++.h>
// using namespace std;

// bool check(int val) {
//   if (val == 0) {
//     return true;
//   } else {
//     return false;
//   }
// }

// int bfs(vector<int> &arr, int index, int sum) {
//   vector<int> dp(sum + 1, -1);
//   queue<int> q;
//   q.push(sum);

//   int cnt = 0;
//   bool flag = 0;
//   int sumValue = sum;
//   while (!q.empty()) {
//     int qSize = q.size();

//     for (int i = 0; i < qSize; ++i) {
//       int val = q.front();
//       if (dp[val] != -1) {
//         continue;
//       }
//       flag = check(val);
//       if (flag) {
//         sumValue = 0;
//         break;
//       }

//       for (int j = 0; j < (int)arr.size(); ++j) {
//         if (val >= arr[j]) {
//           q.push(val - arr[j]);
//           dp[val] = 1;
//         }
//       }
//       q.pop();
//     }
//     if (flag) {
//       break;
//     }
//     cnt += 1;
//   }
//   if (sumValue == 0) {
//     return cnt;
//   }
//   return -1;
// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int n, sum;
//   cin >> n >> sum;

//   vector<int> arr(n);
//   for (int i = 0; i < n; ++i) {
//     cin >> arr[i];
//   }
//   sort(arr.begin(), arr.end());

//   cout << bfs(arr, 0, sum) << endl;

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, sum;
  cin >> n >> sum;

  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  vector<int> dp(sum + 1, 1e9);
  dp[0] = 0;

  for (int val = 1; val < sum + 1; ++val) {
    for (int j = 0; j < (int)arr.size(); ++j) {
      if (val >= arr[j]) {
        dp[val] = min(dp[val], dp[val - arr[j]] + 1);
      }
    }
  }
  cout << (dp[sum] < 1e9 ? dp[sum] : -1) << endl;
  return 0;
}