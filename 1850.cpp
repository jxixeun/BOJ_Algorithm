#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 1000

long long gcd(long long a, long long b){
    if (b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    long long a, b;
    cin >> a >> b;

    long long result = gcd(a,b);
    for (int i=0;i<result;i++)
        cout << 1;

}
