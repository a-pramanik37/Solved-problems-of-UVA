#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, a[15], b[15], i=0, j, k;
    while(scanf("%d", &s)==1){
            if(s<0) break;
    i++;
        for(j = 0; j <12; j++){
            scanf("%d", &a[j]);
        }
        for(k = 0; k <12; k++){
            scanf("%d", &b[k]);
        }
        printf("Case %d:\n", i);
        if(s<b[0]) {
                printf("No problem. :(\n");
                a[0]=a[0]+s;
        }
        else {
                printf("No problem! :D\n");
                a[0]=a[0]+(s-b[0]);
        }

        for(j=0, k=1; k<12; j++, k++){
            if(a[j]<b[k]) {
                    printf("No problem. :(\n");
                    a[j+1]=a[j+1]+a[j];
            }
            else {
                    printf("No problem! :D\n");
                    a[j+1]=a[j+1]+(a[j]-b[k]);
            }
        }

    }
    return 0;
}
