#include <stdio.h>
int a[1005], store[1005];
int main()
{
    int i, j, n, c, k, count, p;
    for(i = 2; i <= 1005; i++){
        if(a[i]==0){
            for(j = i*2; j <= 1005; j = j+i){
                a[j]=1;
            }
        }
    }

    while(scanf("%d%d", &n, &c)==2){
            count = 0;
            for(i = 1, k=1; i <=n; i++){
            if(a[i]==0){
                store[k]=i;
                k++;
    count++;
            }
        }


        if(count%2==0){
            if((c*2)>=count){
                printf("%d %d: ", n, c);
                for(i = 1; i<= count; i++){
                        if(i==1) printf("%d", store[i]);

                    else printf(" %d", store[i]);
                }
                printf("\n\n");
            }
                else{

                     printf("%d %d: ", n, c);
            for(i = (count/2)+1-c; i <=(count/2); i++){
                    if(i==(count/2)+1-c) printf("%d", store[i]);

                    else printf(" %d", store[i]);
            }
            for(i = (count/2)+1; i <=(count/2)+c; i++){
                printf(" %d", store[i]);
            }
            printf("\n\n");
        }
        }
        else if(count%2==1){
            if((c*2)-1>=count){
                printf("%d %d: ", n, c);
                for(i = 1; i<= count; i++){
                        if(i==1) printf("%d", store[i]);
                    else printf(" %d", store[i]);
                }
                printf("\n\n");
            }
                else {

                p = (count/2)+1;
            printf("%d %d: ", n, c);
        for(i = p-(c-1); i <= p; i++){
                if(i==p-(c-1)) printf("%d",store[i]);
                else printf(" %d",store[i]);
        }
        for(i = p+1; i <=p+(c-1); i++){
            printf(" %d", store[i]);

        }
        printf("\n\n");
        }
        }

    }
    return 0;
}
