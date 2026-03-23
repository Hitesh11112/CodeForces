#include<bits/stdc++.h>
using namespace std;

int main() {
  char a;cin >> a;
  if(islower(a)) cout << (char)toupper(a);
  if(isupper(a)) cout << (char)tolower(a);
}