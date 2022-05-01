#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 1000

bool isPrime[1010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    vector <int> v;
    for (int i=2;i<=MAX;i++){
        isPrime[i]=true;
    }

   for(int i=2;i<=MAX;i++){
       if (isPrime[i])
           v.push_back(i);
           for(int j=i*i;j<=MAX;j+=i)
               isPrime[j]=false;
   }

   int T;
   cin >> T;

   while (T--){
       int K; int check = false;
       cin >> K;
       for (int i=0;i<v.size();i++){
           for (int j=0;j<v.size();j++){
               for (int k=0;k<v.size();k++){
                   if (v[i]+v[j]+v[k]==K){
                       cout << v[i] << ' ' << v[j]  << ' ' << v[k] << '\n';
                       check = true;
                       break;
                   }
               }
               if (check)
                   break;
           }
           if (check)
               break;
       }
       if (!check){
           cout << 0 << '\n';
       }
   }

}
