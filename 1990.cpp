#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define MAX 9989900

bool isPrime (int n)
{
    if (n%2==0)
        return false;
    for (int i=3;i<=sqrt(n);i+=2){
        if (n%i == 0)
            return false;
    }
    return true;
}

bool isPalin (int n)
{
    string s1 = to_string(n);
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    if (s1==s2)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a,b;
    cin >> a >> b;

    for (int i=a; i<=MAX ;i++)
    {
        if (i>b)
            break;
       if (isPalin(i))
           if (isPrime(i))
               cout << i << '\n';
    }
    cout << -1;

}
