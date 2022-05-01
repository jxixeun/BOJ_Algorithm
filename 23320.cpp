#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, Y; double X;
    int student_num=0;
    cin >> N;

    int arr[101];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    cin >> X >> Y;
    X = X/100;
    for (int i=0;i<N;i++){
        if (arr[i] >= Y){
            student_num++;
        }
    }

    cout << N*X << ' ' << student_num;
}
