#include <iostream>
using namespace std;

long long gcd (long long a, long long b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd(b, a%b);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    long long a, d; long long test_case;

    cin >> a >> d;
    cin >> test_case;

    while(test_case--)
    {
        long long query, l, r;
        long long answer;

        cin >> query >> l >> r;

        if (query == 1)
        {
            long long x = a + (l-2)*d;
            long long y = a + (r-1)*d;
            answer = r*(a+y)/2 - (l-1)*(a+x)/2;
        }
        else
        {
            if (l!=r){
                answer = gcd(a,d);
            }
            else {
                answer = a + (l-1)*d;
            }
        }

        cout << answer << '\n';
    }
}
