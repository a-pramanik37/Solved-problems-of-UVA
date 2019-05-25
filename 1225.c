#include <stdio.h>
#include <string.h>
int main()
{
    int t, len, n, i, k, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, j;
    char a[10000];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        for(k = -1; k<n; k++){
            scanf("%c", a[k+1]);
        }
        len = strlen(a);
        c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c10=0;

        for(j = 0; j <len; j++){
            if(a[j]=='0') c1++;
            else if(a[j]=='1') c2++;
            else if(a[j]=='2') c3++;
            else if(a[j]=='3') c4++;
            else if(a[j]=='4') c5++;
            else if(a[j]=='5') c6++;
            else if(a[j]=='6') c7++;
            else if(a[j]=='7') c8++;
            else if(a[j]=='8') c9++;
            else if(a[j]=='9') c10++;
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
    }

}
