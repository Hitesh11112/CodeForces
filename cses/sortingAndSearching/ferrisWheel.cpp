// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   long long n, x; cin >> n >> x;

//   vector<long long> arr(n);
//   for(auto &ele : arr) cin >> ele;
  
//   sort(arr.begin(),arr.end());
  
//   long long sum = 0, cnt = 0;

//   for(long long i = n-1, j = 0; i > j; --i) {
//     long long sum = arr[i];
//     if(sum > x) continue;
//     while(sum + arr[j] <= x && j < i) sum += arr[j++]; 
//     if(sum <= x && i != j){
//       cnt +=1;
//     }
//   }
//   if(cnt == 0) cout << cnt << '\n';
//   else cout << cnt + 1 << '\n';
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    vector<long long> arr(n);
    for(auto &e : arr) cin >> e;

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1, ans = 0;

    while(i <= j) {
      if(arr[i] + arr[j] <= x) i++;
      j--;
      ans++;
    }
    cout << ans << '\n';
}