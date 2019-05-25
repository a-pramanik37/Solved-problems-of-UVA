#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[30000];
    int i, j, len, p, q, x, mod;
    while(scanf("%s", &a)){
        len = strlen(a);
        if(len==1 && a[0]=='0') break;

        p =a[len-1]-48;
        q = 5*p;
        mod = 0;
        for(i = 0; i <(len-1); i++){
            mod= mod*10+(a[i]-48);
            mod = mod%17;
        }
        x = mod-q;

        if(x%17==0) printf("1\n");
        else printf("0\n");

    }
    return 0;
}
