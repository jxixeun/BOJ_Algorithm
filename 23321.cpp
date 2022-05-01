#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    char dance[3][10]={".omln","owln.","..oLn"};

    string str[6];
    for (int i=0; i<5; i++){
        cin >> str[i];
    }
    for (int i=0;i<str[0].length();i++){
        char temp[5];
        for (int j=0;j<5;j++){
            temp[j]=str[j][i];
        }
        int k;
        for (k=0;k<3;k++){
            if (strncmp(temp,dance[k],5)==0) {
                if (k==0){
                    k=1;
                }
                else if (k==1){
                    k=0;
                }
                for (int j=0;j<5;j++){
                    str[j][i]=dance[k][j];
                }
                break;
            }
        }
    }
    for (int i=0;i<5;i++){
        cout << str[i] << endl;
    }
}
