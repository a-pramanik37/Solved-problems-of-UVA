#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50], c[50];

    int n, min=11, max=0;
    scanf("%d", &n);

    while(n>0){
        gets(a);

        if(strcmp(a, "too high")==0 || strcmp(a, "too low")==0){
            if(n<=min){
                min = n;
                strcpy(b, a);
            }
            else if(n>=max){
                max = n;
                strcpy(c, a);
            }
        }
        else if(strcmp(a, "right on")==0){
            if(n<=min && strcmp(b, "too low")==0) printf("Stan is dishonest\n");
            else if(n>=max && strcmp(c, "too high")==0) printf("Stan is dishonest\n");
            else printf("Stan may be honest\n");

                    max = 0;
        min = 11;
        }

        scanf("%d", &n);
    }
    return 0;
}
