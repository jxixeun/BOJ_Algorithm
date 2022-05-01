#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

bool isPrime (long long n)
{
    if (n<=1)
        return false;
    if (n==2)
        return true;
    if (n%2==0)
        return false;
    int sqrtn = sqrt(n);
    for (long long i=3;i<=sqrtn;i+=2){
        if (n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    long long test_case;
    cin >> test_case;
    while(test_case--)
    {
        long long n;
        cin >> n;
        while(1){
            if (isPrime(n)){
                cout << n << '\n';
                break;
            }
            n+=1;
        }
    }
}
