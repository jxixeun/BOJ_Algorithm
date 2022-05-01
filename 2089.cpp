#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 10000000

bool isPrime[10101010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    if (N==0){
        cout << 0;
        return 0;
    }

    string answer = "";
    while (N!=0)
    {
        if (N%-2==0){
            answer += "0";
            N /= -2;
        }
        else {
            answer += "1";
            N = (N-1)/-2;
        }
    }
    reverse(answer.begin(), answer.end());
    cout << answer;

}
