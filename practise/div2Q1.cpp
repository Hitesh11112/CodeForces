#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 1 5 2 10
    int a, b, c, d; cin >> a >> b >> c >> d;
    int totalStudentWentToRes = (a + b) - c;
    if(c > a || c > b) cout << -1 << '\n';
    else if((totalStudentWentToRes > d) || (d - totalStudentWentToRes < 1)) cout << -1 << "\n";
    else cout << d - totalStudentWentToRes << '\n';
    return 0;
} 
