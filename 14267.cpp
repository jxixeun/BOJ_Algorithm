#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> child(100001);
long long praise[100001];

void preorder(int index){
    for (auto &k:child[index]){
        praise[k]+=praise[index];
        preorder(k);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m,a,b;
    cin >> n >> m;
    for (int i=1;i<=n;++i){
        cin >> a;
        if (a!=-1){
            child[a].push_back(i);
        }
    }
    while (m--){
        cin >> a >> b;
        praise[a]+=b;
    }
    preorder(1);
    for (int i=1;i<=n;++i){
        cout << praise[i] << ' ';
    }

}
