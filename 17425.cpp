#include <iostream>
#include <vector>
using namespace std;

long long f[1010101];
long long g[1010101];

#define MAX 1000001
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int test_case, N;
    cin >> test_case;

    for (long long i = 0; i<=MAX; i++){
        f[i] = 1;
    }

    for (long long i=2;i<=MAX;i++){
        for (long long j=1; i*j<=MAX;j++){
            f[i*j] += i; // f[i*j]의 약수의 합. 미리 1을 더해줘야함.
        }
    } 

    for (long long i=1; i<=MAX; i++){
        g[i] = g[i-1] + f[i];
    }

    while(test_case--){
        cin >> N;
        cout << g[N] << '\n';
    }
}
