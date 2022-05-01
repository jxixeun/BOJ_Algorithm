#include<iostream>
#include<cstring>
using namespace std;

int A[1000001];
int sorted[1000001];

long long answer = 0;

void merge(int l, int m, int r) {
    int i, j, k;
    i = l; j = m + 1; k = l;
    while (i <= m && j <= r) {
        if (A[i] <= A[j])
            sorted[k++] = A[i++];
        else {
            answer+=(m-i+1);
            sorted[k++] = A[j++];
        }
    }

    if (i > m) {
        while (j <= r)
            sorted[k++] = A[j++];
    }
    else {
        while (i <= m){
            sorted[k++] = A[i++];
        }
    }

    for (i = l; i <= r; i++)
        A[i] = sorted[i];
}

void mergeSort(int l, int r) {
    int m;
    if (l < r) {
        m = (l + r) / 2;
        mergeSort(l, m);
        mergeSort(m + 1, r);
        merge(l, m, r);
    }
}

int main(int argc, char** argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test_case;
    //int T;
    //freopen("/Users/jieun/Downloads/sample_input-6.txt", "r", stdin);
    //cin>>T;
    for(test_case = 1; test_case <= 1; ++test_case)
    {
        memset(A,0,sizeof(A));
        memset(sorted,0,sizeof(sorted));
        answer = 0;
        int N;
        cin >> N;
        for (int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        mergeSort(0,N-1);
        //cout << "#" << test_case << " " << answer << "\n";
        cout << answer;
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
