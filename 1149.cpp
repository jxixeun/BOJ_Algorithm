#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int dp[1010][4];
    int cost[1010][4];
    int answer;

    cin >> N;
    for (int i=0;i<N;i++){
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2]; // 0=red, 1=green, 2=blue
    }

    dp[0][0]=cost[0][0];
    dp[0][1]=cost[0][1];
    dp[0][2]=cost[0][2];

    for (int i=1;i<N;i++){
        dp[i][0]=min(dp[i-1][1],dp[i-1][2])+cost[i][0];
        dp[i][1]=min(dp[i-1][0],dp[i-1][2])+cost[i][1];
        dp[i][2]=min(dp[i-1][0],dp[i-1][1])+cost[i][2];
    }
    
    answer=dp[N-1][0];
    
    for (int i=1;i<3;i++){
        if (answer > dp[N-1][i])
            answer=dp[N-1][i];
    }
    cout << answer;

}
