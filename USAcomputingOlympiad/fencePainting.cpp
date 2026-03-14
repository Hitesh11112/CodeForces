#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
  freopen("paint.in", "r", stdin);
	// Use standard output to write to "paint.out"
	freopen("paint.out", "w", stdout);
  int a, b, c, d;
  cin >> a >> b >> c >> d;


  if((b < c && b < d ) || (d < a && d < b)) cout << b - a + d - c << endl;
  else if(a <= c && d <= b) cout << b - a << endl;
  else if(c <= a && b <= d) cout << d - c << endl; 
  else if(c <= a && d <= b) cout << b - c << endl;
  else if(a <= c && b <= d) cout << d - a << endl; 
  return 0;
}