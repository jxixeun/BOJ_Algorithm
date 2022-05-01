#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    long long N;
    long long answer = 0;
    cin >> N;
    for (long long i=1;i<=N;i++){
        answer += (N/i) * i;
    }
    cout << answer;
}
