#include <stdio.h>
#include <string.h>

int main()
{
    long long n, i, j, k, sum, b[2000], x;

    char a[3000], ch;

    while(scanf("%s %c %lld", &a, &ch, &n)!=EOF){


            if(a[0]=='0' && strlen(a)==1){
                printf("0\n");
            }

        else if(ch=='%'){
                sum = 0;
            for(i = 0; i<strlen(a); i++){
                sum = sum*10+a[i]-48;
                sum = sum%n;
            }

            printf("%lld\n", sum);
        }

        else{
            x = 0;
            sum = 0;
            for(i = 0; i<strlen(a); i++){
                sum = sum*10+a[i]-48;

                if(sum>=0){
                    b[x] = sum/n;
                    sum = sum%n;
                    x++;
                }
            }

            for(i = 0; ; i++){
                if(b[i]>0) break;
            }


                for(j = i; j<x; j++){
                    printf("%lld", b[j]);
                }
                printf("\n");

        }

    }
    return 0;
}
