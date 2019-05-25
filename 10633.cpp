#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, p, q, j, c=0;

    while(scanf("%lld", &n)==1 && n!=0){

        for(i = 1, j = 0; i<=2; i++){
            p = n+i;
            q =  p/10;


            c++;
            if(q+n==p){
               if(c==1) printf("%lld", q+n);
               else printf(" %lld", q+n);
            }
            else if(q+n<p || q+n>p) break;
        }

        printf("\n");


    }
    return 0;
}
