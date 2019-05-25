#include <stdio.h>
int main()
{
    long long  A, L, i, j, flg, count, p = 0;

    while(scanf("%lld%lld", &A, &L)){
            p++;
        if(A<0 && L<0) break;

        count = 0;

        for(i = A; i!=1; i=i){

           if(i%2==0){
            i = i/2;
        if(i>L) break;
           }
           else{
            i = 3*i+1;
            if(i>L) break;
           }
        count++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", p, A, L, count+1);
    }
    return 0;

}
