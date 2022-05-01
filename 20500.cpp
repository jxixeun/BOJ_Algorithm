#include <iostream>
#include <algorithm>
using namespace std;

int arr[2020];
int dp[1551][4];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int MOD = 1000000007;
    cin >> N;

    dp[0][0]=0;
    dp[1][0]=0;
    dp[2][0]=1; // 15
    dp[2][1]=1; // 55
    dp[2][2]=0;

    for (int i=3; i<N+1; i++){
        dp[i][0] = (dp[i-1][1] +dp[i-1][2]) % MOD;
        dp[i][1] = (dp[i-1][0] +dp[i-1][2]) % MOD;
        dp[i][2] = (dp[i-1][1] +dp[i-1][0]) % MOD;
    }

    cout << dp[N][0];
}
