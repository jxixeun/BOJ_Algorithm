#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;
    while (T--){
        long long n,m;
        long long two=1; int two_exp=0; long long answer=0;
        cin >> n >> m;
        while(n >= two){
            two_exp++;
            two*=2;
        }
        answer = two_exp+m;
        cout << answer << endl;
    }

}
