#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()

{
    char a[400], b[300], c[400], d[400], e[500], f[500], g[500], h[500], i[500], j[200];
    int t, A,B,C,D,E,F,G,H,I,J,p, ma;
    scanf("%d", &t);
    for(p = 1; p <= t; p++){
            ma = 0;
            scanf("%s", &a);
            scanf("%d", &A);
         if(A>ma) ma = A;
            scanf("%s", &b);
            scanf("%d", &B);
            if(B>ma) ma = B;
            scanf("%s", &c);
            scanf("%d", &C);
            if(C>ma) ma = C;
            scanf("%s", &d);
            scanf("%d",&D);
            if(D>ma) ma = D;
            scanf("%s", &e);
            scanf("%d", &E);
            if(E>ma) ma = E;
            scanf("%s", &f);
            scanf("%d", &F);
            if(F>ma) ma = F;
            scanf("%s", &g);
            scanf("%d", &G);
            if(G>ma) ma = G;
            scanf("%s", &h);
            scanf("%d", &H);
            if(H>ma) ma = H;
            scanf("%s", &i);
            scanf("%d", &I);
            if(I>ma) ma = I;
            scanf("%s", &j);
            scanf("%d", &J);
            if(J>ma) ma = J;


           printf("Case #%d:\n", p);

           if(ma==A) printf("%s\n", a);
          if(ma==B) printf("%s\n", b);
         if(ma==C) printf("%s\n", c);
          if(ma==D) printf("%s\n", d);
          if(ma==E) printf("%s\n", e);
           if(ma== F) printf("%s\n", f);
          if(ma ==G) printf("%s\n", g);
          if(ma==H) printf("%s\n", h);
           if(ma==I) printf("%s\n", i);
           if(ma== J) printf("%s\n", j);
}
    return 0;
}
