#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define MAX 4000000

bool isPrime[4040404];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

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
    vector <int> v;
    cin >> N;

    for (int i=2; i<=N;i++){
        if (isPrime[i]){
            v.push_back(i);
        }
    }

    int left =0; int right =0;
    int mySum = 0; int answer = 0;

    while (left <= right && right <= v.size()){
        if (mySum > N){
            mySum-=v[left++];
        }
        else if (mySum==N){
            mySum-=v[left++];
            answer++;
        }
        else {
            if (right == v.size())
                break;
            mySum+=v[right++];
        }
    }
    cout << answer;

}
