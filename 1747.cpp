#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define MAX 1004000

bool isPrime[1004040];

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);

    for (int i=0;i<=MAX;i++)
    {
        isPrime[i]=true;
    }

    isPrime[0] = isPrime[1] = false;
    int root = sqrt(MAX);
    for (int i= 2; i<=root; i++){
        if (isPrime[i]){
            for (int j=i*i;j<=MAX;j+=i)
                isPrime[j] = false;
        }
    }

    int N;
    bool isPalin;
    cin >> N;
    for (int i=N; i<=MAX;i++){
        isPalin = true;
        if (isPrime[i]){
            string s = to_string(i);
            for (int j=0;j<s.size()/2;j++){
                if(s[j] != s[s.size()-1-j]){
                    isPalin = false;
                    break;
                }
            }
            if (isPalin){
                cout << i;
                return 0;
            }
        }
    }


}
