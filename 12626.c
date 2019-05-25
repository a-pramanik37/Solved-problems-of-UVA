#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ar[1000];
    int T,  j, len, m, a, r, g, i, t, k, mi;
    scanf("%d",&T);
    for(j = 1; j <=T; j++){
        scanf("%s", &ar);

        len =strlen(ar);
        m=0;
        a=0;
        r=0;
        g=0;
        i=0;
        t=0;
        for(k = 0; k < len; k++){
            if(ar[k]=='M') m++;
            if(ar[k]=='A') a++;
            if(ar[k]=='R') r++;
            if(ar[k]=='G') g++;
            if(ar[k]=='I') i++;
            if(ar[k]=='T') t++;
        }
       a = a/3;
       r = r/2;

       mi=1000;
       if(m<mi) mi = m;
       if(a<mi) mi = a;
       if(r<mi) mi = r;
       if(g<mi) mi = g;
       if(i<mi) mi = i;
       if(t<mi) mi = t;

       printf("%d\n", mi);
    }
    return 0;

}
