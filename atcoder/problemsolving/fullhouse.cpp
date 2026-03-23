#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[5];
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }
  vector<int> b(50,0);
  for(auto it : a) b[it] +=1;

  int cnt = 0, cnt1 = 0;
  for (int i = 0; i < 50; ++i) {
    if (b[i] == 3) cnt += 1;
    if (b[i] == 2) cnt1 += 1;
  }
  
  if (cnt == 1 && cnt1 == 1) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}