#include <stdio.h>
int GCD(int a, int b);
int main()
{
    int N, i, G, j, p;

    while(scanf("%d", &N) != EOF){
            if(N == 0){
                break;
            }
        G = 0;

        for(i =1; i < N; i++){
            for(j = i + 1; j <= N; j++){
                p = GCD(i, j);
                G = G + p;
            }
        }
        printf("%d\n", G);
    }
    return 0;
}

int GCD(int a, int b)
{
    int x, t, gcd;
    if(a==0) gcd = a;
    else if(b==0) gcd = b;
    else {
        while(b!=0){
            t = b;
            b = a%b;
            a = t;
        }
        gcd = a;
    }

     return gcd;
}
