#include <iostream>
#include <algorithm>
using namespace std;

int arr[2020];
int dp[2020][2020];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M,S,E;
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> arr[i];
        dp[i][i]=1;
    }
    for (int i=1;i<N;i++){
        if (arr[i]==arr[i+1])
            dp[i][i+1]=1;
    }
    for (int i=2;i<N;i++){
        for (int j=1;j<=N-i;j++){
           if (arr[j] == arr[j+i] && dp[j+1][j+i-1])
               dp[j][j+i]=1;
        }
    }
    cin >> M;
    for (int i=0;i<M;i++){
        cin >> S >> E;
        cout << dp[S][E] << '\n';
    }

}
