#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b==0)
        return a;
    return gcd(b,a % b);
}

long long extended_euclid(long long a, long long b)
{
    long long s, s0, s1;
    long long t, t0, t1;
    long long r, r0, r1;
    long long q;

    s0 = 1, t0 = 0;
    s1 = 0, t1 = 1;
    r0 = a, r1 = b;

    while (r1!=0) {
        q = r0 / r1;
        r = r0 - r1*q;
        t = t0 - t1*q;
        s = s0 - s1*q;
        s0 = s1; s1 = s;
        t0 = t1; t1 = t;
        r0 = r1; r1 = r;
    }

    return t0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long N,A;
    long long ans1, ans2;

    cin >> N >> A;
    ans1 = N-A;

    if (gcd(N,A)!=1)
        cout << ans1 << " " << -1 << endl;
    else {
        ans2 = extended_euclid(N,A);
        if (ans2 < 0){
            ans2 += N;
        }
        cout << ans1 << " " << ans2 << endl;
    }

}

