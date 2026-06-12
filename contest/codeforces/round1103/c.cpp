
// ........solution not correct 

#include<bits/stdc++.h>
using namespace std;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t;
  cin >> t;
  
  while(t--)  {
    long long a, b, x;
    cin >> a >> b >> x;

    if(a == b) {
      cout << 0 << '\n';
      continue;
    }

    int cnt = abs(a-b);
    auto rec = [&](int a, int b){
      if(abs(a-b) == 1) cnt = min(cnt,cnt +1);
      return abs(a-b) == 1; 
    };

    while(1) {
      // Break if Both Same
      if(a == b) break;

      
      // case 1. Both smaller 
      if(a < x && b < x) {
        //check the first condition
        if(rec(a,b)) break;
        cnt += 2;
        break;
      }
      //case 2. Else One  
      else {
        //check the first condition
        if(rec(a,b)) break; 
        
        if(b > a) swap(a,b);
        a /= x;
        cnt += 1;
      }
    }
    cout << cnt << '\n';
  }

  return 0;
}