#include <iostream>
#include <cmath>
using namespace std;

bool isPrime[10101];

#define MAX 10000

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for (int i=0;i<=MAX;i++)
    {
        isPrime[i]=true;
    }

    isPrime[0] = isPrime[1] = false;

    for (int i= 2; i<=100; i++){
        if (isPrime[i]){
            for (int j=i*i;j<=MAX;j+=i)
                isPrime[j] = false;
        }
    }

    int M,N;
    cin >> M >> N;

    int min = -1;
    int answer = 0;
    for (int i=M; i<=N; i++)
    {
        if (isPrime[i]){
            if (min == -1)
                min = i;
            answer += i;
        }
    }

    if (min == -1)
        cout << -1;
    else {
        cout << answer << '\n';
        cout << min;
    }

}
