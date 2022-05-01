#include <iostream>
#include <cmath>
using namespace std;

bool isPrime[1010101];

#define MAX 1000000

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for (int i=0;i<=MAX;i++)
    {
        isPrime[i]=true;
    }

    isPrime[0] = isPrime[1] = false;

    int root = sqrt(1000000);

    for (int i= 2; i<=root; i++)
    {
        if (isPrime[i])
            for (int j=i*i;j<=MAX;j+=i){
                isPrime[j] = false;
            }
    }

    int M, N;
    cin >> M >> N;

    for (int i=M;i<=N;i++)
    {
        if(isPrime[i])
            cout << i << '\n';
    }

}
