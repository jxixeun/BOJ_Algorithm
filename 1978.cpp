#include <iostream>
#include <cmath>
using namespace std;

bool isPrime[1010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int N; int answer=0;

    cin >> N;

    for (int i=0;i<=1000;i++)
    {
        isPrime[i]=true;
    }
    isPrime[0] = isPrime[1] = false;

    int root = sqrt(1000);

    for (int i= 2; i<=root; i++)
    {
        if (isPrime[i])
            for (int j=i*i;j<=1000;j+=i){
                isPrime[j] = false;
            }
    }

    while(N--)
    {
        int temp;
        cin >> temp;
        if (isPrime[temp])
            answer++;
    }
    cout << answer;

}
