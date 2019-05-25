#include <stdio.h>
int main()
{
    int  A, L, i, j, flg, count, p = 0;

    while(scanf("%d%d", &A, &L)==2){
            p++;
        if(A<0 && L<0) break;

        count = 0;

        for(i = A; (i<=L || i!=1); i=i){
           if(i%2==0){
            i = i/2;
           }
           else{
            i = 3*i+1;
           }
           count++;
        }
        printf("Case %d: A = %d, limit = %d, number of terms = %d", p, A, L, count);
    }
    return 0;

}
