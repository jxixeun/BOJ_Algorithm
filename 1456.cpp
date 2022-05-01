#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define MAX 10000000

bool isPrime[10101010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    vector <long long> v;

    for (long long i=2;i<=MAX;i++){
        isPrime[i]=true;
    }
    isPrime[0] = isPrime[1] = false;
    for (long long i=2; i<=MAX; i++){
        if(isPrime[i])
            v.push_back(i);
            for (long long j=i*i;j<=MAX;j+=i)
                isPrime[j]=false;
    }

    long long A, B;
    cin >> A >> B;

    long long answer = 0;
    for(long long i=0;i<v.size();i++){
        long long x = v[i];
        while (v[i] <= B/x)
        {
            if (v[i] * x >= A){
                answer++;
            }
            x*=v[i];
        }
    }
    cout << answer;

}
