#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, f, i, j, k, p;
    scanf("%d", &t);
    for(i =1; i <= t; i++){
        scanf("%d%d", &a, &f);
        for(j = 1; j <=f; j++){

        for(k = 1; k<=a; k++){
                count = 0;
            for(p=k; p<=k; p=p){
                printf("%d", p);
                count++;
                if(count==k) break;
            }
            printf("\n");
        }
        for(k = (a-1); k>=1; k--){
                count = 0;
            for(p = k; p<=k; p=p){
                printf("%d",p);
                count++;
                if(count==k) break;
            }
            printf("\n");
        }
        printf("\n\n");
        }
    }
    return 0;

}

