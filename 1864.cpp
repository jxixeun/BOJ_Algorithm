#include <stdio.h>
#include <string.h>

int convert(char x)
{
    if (x=='-')
        return 0;
    else if (x=='\\')
        return 1;
    else if (x=='(')
        return 2;
    else if (x=='@')
        return 3;
    else if (x=='?')
        return 4;
    else if (x=='>')
        return 5;
    else if (x=='&')
        return 6;
    else if (x=='%')
        return 7;
    else if (x=='/')
        return -1;
}
int main() {
    while (1){
        char ch[10];
        int answer=0; int eight=1;
        scanf("%s",ch);
        if (ch[0]=='#')
            break;
        int i; int length=strlen(ch)-1;
        for (i=length; i>=0; i--){
            answer+=(convert(ch[i])*eight);
            eight*=8;
        }
        printf("%d\n",answer);
    }
}

