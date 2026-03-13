#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
/*
Observations
positve integers only
calculate no of distinct ways to prodoce the money x

*/
int solve(int sum, int index, vector<int> &arr) {
  // Base Condition:increment the counter if sum == 0 and if less than 0 than
  // return don't increment;
  if (sum == 0) {
    return 1;
  }
  if (sum < 0) {
    return 0;
  }

  // Logic
  // check if the current arr index is smaller than sum;
  int cnt = 0;
  if (arr[index] < sum) {
    cnt += solve(sum - arr[index], index, arr);
  } else {
    solve(sum, index + 1, arr);
  }
  return cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int coin, sum;
  cin >> coin >> sum;

  vector<int> arr(coin);
  for (auto &i : arr) {
    cin >> i;
  }

  cout << solve(sum, 0, arr) << endl;

  return 0;
}