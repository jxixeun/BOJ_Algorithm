#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N,K; int arr[2020]; int answer=0; int date=0;
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    while (arr[0]!=arr[N-1]){
        date++;
        answer+=(arr[N-1]-arr[0]);
        arr[N-1]=arr[0];
        sort(arr,arr+N);
    }
    cout << answer << ' ' << date;

}
