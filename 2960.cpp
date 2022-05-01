#include <iostream>
#include <cmath>
using namespace std;

bool isPrime[1010];

#define MAX 1000

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for (int i=0;i<=MAX;i++)
    {
        isPrime[i]=true;
    }

    int N, K;
    cin >> N >> K;

    isPrime[0] = isPrime[1] = false;
    int answer = 0;

    for (int i= 2; i<=N; i++)
    {
        if (isPrime[i])
            for (int j=i;j<=N;j+=i){
                if (isPrime[j]){
                    isPrime[j] = false;
                    answer++;
                }
                if (answer == K) {
                    cout << j;
                    return 0;
                }
            }
    }
}
