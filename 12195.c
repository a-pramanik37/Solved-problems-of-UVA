#include <stdio.h>
#include <string.h>
int main()
{
    char a[600];
    double sum, count, x;
    int i, j;

    while(scanf("%s", &a)){
        if(a[0]=='*' && strlen(a)==1) break;
        x = 0;
        count = 0;
        for(i = 1; i<strlen(a); i++){
                sum = 0;
            if(a[i]=='/'){
                for(j = i-1; j>x; j--){

                    if(a[j]=='W') sum = sum+1;
                    if(a[j]=='H') sum = sum+(1/2.0);
                    if(a[j]=='Q') sum = sum+(1/4.0);
                    if(a[j]=='E') sum = sum+(1/8.0);
                    if(a[j]=='S') sum = sum+(1/16.0);
                    if(a[j]=='T') sum = sum+(1/32.0);
                    if(a[j]=='X') sum = sum+(1/64.0);
                }

                if(sum==1) count++;

                x = i;
            }
        }

        printf("%.lf\n", count);
    }
    return 0;
}
