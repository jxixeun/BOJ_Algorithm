#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 10000000
bool isPrime[10101010];

bool gcd(int x, int y)
{
    if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    if (y%x == 0)
        return true;
    if ((y-x) < x)
        return !gcd(y-x,x);
    return true;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int x, y;
    while (cin >> x >> y){
        if (x == 0 && y == 0)
            break;
        if (gcd(x,y))
            cout << "A wins\n";
        else
            cout << "B wins\n";
    }
}
