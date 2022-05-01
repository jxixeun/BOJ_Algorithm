#include <iostream>
#include <cmath>
using namespace std;

bool isPrime[252525];

#define MAX 250000

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for (int i=0;i<=MAX;i++)
    {
        isPrime[i]=true;
    }

    isPrime[0] = isPrime[1] = false;
    int root = sqrt(MAX);
    for (int i= 2; i<=root; i++){
        if (isPrime[i]){
            for (int j=i*i;j<=MAX;j+=i)
                isPrime[j] = false;
        }
    }

    int N;
    while (cin >> N)
    {
        if (N==0)
            break;
        int answer =0;
        for (int i=N+1; i<=2*N; i++)
        {

            if (isPrime[i])
                answer++;
        }
        cout << answer << '\n';
    }


}
