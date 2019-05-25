#include <stdio.h>
#include <string.h>
int main()
{
    int c=0, n, i, a[10];

    while(scanf("%d", &n)==1){
        if(n==0) break;

        while(n--){
                c=0;
            for(i = 0; i< 5; i++){
                scanf("%d", &a[i]);
                if(a[i]<=127) c++;
            }

        if(c==1){
            if(a[0]<=127) printf("A\n");
            else if(a[1]<=127) printf("B\n");
            else if(a[2]<=127) printf("C\n");
            else if(a[3]<=127) printf("D\n");
            else printf("E\n");
        }
        else printf("*\n");


        }

    }
    return 0;
}
