#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1000001];
int lgcd[1000001];
int rgcd[1000001];

int gcd (int p, int q)
{
    if (q==0)
        return p;
    return gcd (q, p%q);
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> arr[i];
    }
    lgcd[1]=arr[1];
    rgcd[N]=arr[N];
    for (int i=2;i<=N;i++){
        lgcd[i] = gcd(arr[i], lgcd[i-1]);
    }
    for (int i=N-1; i>0; i--){
        rgcd[i] = gcd(arr[i], rgcd[i+1]);
    }

    //lgcd[0] = rgcd[2];
    //rgcd[N+1]=lgcd[N-1];

    int deleteNum = -1;
    int maxGcd = 0;

    for (int i=1;i<=N;i++)
    {
        int temp = gcd(lgcd[i-1],rgcd[i+1]);
        if (maxGcd < temp && (arr[i]%temp)){
            deleteNum = arr[i];
            maxGcd=temp;
        }

    }

    if (deleteNum == -1)
        cout << -1;
    else
        cout << maxGcd << ' ' << deleteNum;
}
