#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    int i, j, n, rem, sum, flg, N;

    for(i = 2; i <= 1000005; i++){
        if(a[i]==0){
            for(j = i*2; j<=1000005; j = j+i){
                a[j]=1;
            }
        }
    }

    flg = 0;

    while(scanf("%d", &n)==1){
        if(a[n]==0) flg = 1;

        N = n;
        sum =0;
        while(n>0){
            rem = n%10;
            sum = sum*10+rem;
            n = n/10;
        }

        if(flg==1 && sum==N){
            printf("%d\n", N*2);
            break;
        }

        else printf("%d\n", N*2);
        flg = 0;

    }
    return 0;
}
