#include <stdio.h>
int main()
{
    int n, i, s1, s2, s3, s4, s5, j, k;
    while(scanf("%d", &n)){
            s1 = 0;

        for(i = n; i > 0; i = i /10){
            j = i % 10;
            s1 = s1 +j;
        }


    }
    return 0;
}
