#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define MAX 7400000

bool isPrime[7400001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    vector <int> v;

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

    for (int i=2;i<=MAX;i++){
        if (isPrime[i])
            v.push_back(i);
    }

    int N;
    cin >> N;
    cout << v[N-1];
}
