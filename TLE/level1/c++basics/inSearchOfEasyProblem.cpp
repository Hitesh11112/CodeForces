#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool get = 1;
  for(int i = 0; i < n; ++i) {
    int a; cin >> a;
    if(a == 1) get = 0;
  }
  if(get) cout << "EASY\n";
  else cout << "HARD\n";
}