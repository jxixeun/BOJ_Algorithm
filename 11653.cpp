#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define MAX 10000000

int minFactor[MAX+1];

vector <int> factor (int n)
{
    vector <int> ret;
    while (n>1)
    {
        ret.push_back(minFactor[n]);
        n /= minFactor[n];
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for (int i=2;i<=MAX;i++)
    {
        minFactor[i]=i;
    }

    minFactor[0] = minFactor[1] = -1;

    int root = sqrt(MAX);
    for (int i= 2; i<=root; i++){
        if (minFactor[i] == i){
            for (int j=i*i;j<=MAX;j+=i)
                if(minFactor[j]==j)
                    minFactor[j] = i;
        }
    }

    int N;
    cin >> N;
    vector <int> answer = factor(N);
    for (int i=0;i<answer.size();i++){
        cout << answer[i] << '\n';
    }
}
