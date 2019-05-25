#include <stdio.h>
#include <math.h>
int main()

{
    int a, i ,j, sum, g=0 ,pk;
    while(scanf("%d",&a)==1){
            g++;
            if(g==1) printf("PERFECTION OUTPUT\n");
        if(a==0){
            printf("END OF OUTPUT\n");
            break;
        }
        sum = 0;
        pk = 0;

        if(sqrt(a)*sqrt(a)==a){
            for(i = 2; i <= sqrt(a); i++){
                if(a%i==0 && (i!=sqrt(a))){
                    sum = sum+i+(a/i);
                }
                else if(i==sqrt(a)){
                    sum = sum+sqrt(a);
                }
            }

            if(sum<a) pk=1;
            else if(sum>a) pk = 2;

    if(a<10) printf("    %d  ", a);
    else if(a<100) printf("   %d  ", a);
    else if(a<1000) printf("  %d  ", a);
    else if(a<10000) printf(" %d  ", a);
    else if(a>=10000) printf("%d  ", a);

    if(pk==0) printf("PERFECT\n");
    if(pk==1) printf("DEFICIENT\n");
    if(pk==2) printf("ABUNDANT\n");

        }
        else if(sqrt(a)*sqrt(a)!=a){
            for(i = 1; i <= sqrt(a);i++){
                if(a%i==0){
                    sum = sum+i+(a/i);
                }
            }

            if(sum<a) pk=1;
            else if(sum>a) pk = 2;

    if(a<10) printf("    %d  ", a);
    else if(a<100) printf("   %d  ", a);
    else if(a<1000) printf("  %d  ", a);
    else if(a<10000) printf(" %d  ", a);
    else if(a>=10000) printf("%d  ", a);

    if(pk==0) printf("PERFECT\n");
    if(pk==1) printf("DEFICIENT\n");
    if(pk==2) printf("ABUNDANT\n");

        }

    }
    return 0;
}
