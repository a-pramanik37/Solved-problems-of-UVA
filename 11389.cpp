#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, r, mr[3000], ev[4000], i, j, sum;

    while(scanf("%d%d%d", &n, &d, &r)==3){

            if(n==0 && d== 0 && r==0)break;

        for(i = 0; i<n; i++){
            scanf("%d", &mr[i]);
        }

        for(i = 0; i<n; i++){
            scanf("%d", &ev[i]);
        }

        sort(mr, mr+n);
        sort(ev, ev+n);

        sum = 0;
        for(i = 0, j =n-1; i<n; i++, j--){
            if(mr[i]+ev[j]>d){
                sum = sum+((mr[i]+ev[j])-d)*r;
            }
        }

        printf("%d\n", sum);

    }
    return 0;
}
