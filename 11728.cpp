#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n, i, sum, ma = 0, j, c=0;

    while(scanf("%d", &n)==1){
            c++;
            if(n==0) break;
            if(n==1 || n==2) ma = 1;
        for(i = n-1; i>= sqrt(n); i--){
                sum = 0;
            for(j = 1; j<=sqrt(i); j++){
                if(i%j==0){
                    sum = sum+j+(i/j);
                }
            }
        if(sqrt(i)*sqrt(i)==i){
            sum = sum-sqrt(i);
        }
        if(sum==n){
            if(ma<i) ma = i;
        }
        }

        if(ma == 0) printf("Case %d: -1\n", c);
        else printf("Case %d: %d\n", c, ma);

        ma = 0;
    }
    return 0;
}
