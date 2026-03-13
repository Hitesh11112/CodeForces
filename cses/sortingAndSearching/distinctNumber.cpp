#include<bits/stdc++.h> 
using namespace std;

int main () {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<int> arr(n);
  for(auto &ele : arr) cin >> ele;
  
  set<int> st;
  for(auto it : arr) st.insert(it);
  
  cout << st.size() << '\n';
}