#include <stdio.h>
int main()
{
    int i, j, a, b, sum, ans, p;
    while(scanf("%d%d", &i, &j) == 2){
        sum = 0;
        if(i < j){
        for(a = i; a <= j; a++){
            ans = 1;
            for(b = a; b != 1; b=b){
                if(b % 2==0){
                    b = b/2;
                }
                else{
                    b = 3*b+1;

                }
                ans = ans+1;
            }
            if(ans >= sum) sum = ans;
        }

        printf("%d %d %d\n", i, j, sum);
        }
        else{
        for(a = j; a <= i; a++){
            ans = 1;
            for(b = a; b != 1; b=b){
                if(b % 2==0){
                    b = b/2;
                }
                else{
                    b = 3*b+1;

                }
                ans = ans+1;
            }
            if(ans >= sum) sum = ans;
        }

        printf("%d %d %d\n", i, j, sum);
        }


    }
    return 0;
}

