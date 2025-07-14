#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while(test--) {
        int score = 0;

        vector<vector<char>> arr(10,vector<char>(10));
        for(int i=0; i < 10; ++i) {
            for(int j=0; j < 10; ++j) {
                cin >> arr[i][j];
            }
        }
        vector<vector<int>> nums ={ 
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
        };
        for(int i=0; i < 10; ++i) {
            for(int j=0; j < 10; ++j) {
                if (arr[i][j] == 'X'){
                    score += nums[i][j];
                }
            }
        }
        cout << score << '\n';
    }

    return 0;
} 
