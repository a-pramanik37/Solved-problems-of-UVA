#include <stdio.h>
#include <string.h>

int main()
{
    char ar[200];
    int T, n, i, b, w, t, a, j;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d", &n);
        scanf("%s", ar);
        b=0;
        w=0;
        t=0;
        a=0;
        for(j = 0; j <n; j++){

        if(ar[j]=='B') b+=1;

        else if(ar[j]=='W') w+=1;
        else if(ar[j]=='T') t+=1;

        else if(ar[j]=='A') a+=1;
        }

        if(b>0 && w==0) printf("Case %d: BANGLAWASH\n", i);
        else if(w>0 && b==0) printf("Case %d: WHITEWASH\n", i);
        else if(a==n) printf("Case %d: ABANDONED\n", i);
        else if(b==w && a!=n) printf("Case %d: DRAW %d %d\n", i, b, w);
        else if(b>w) printf("Case %d: BANGLADESH %d - %d\n", i, b, w);
        else if(w>b) printf("Case %d: WWW %d - %d\n", i, w, b);
    }
    return 0;
}
