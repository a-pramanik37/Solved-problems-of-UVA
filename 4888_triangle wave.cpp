#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, f, i, j, k, p, coun;
    scanf("%d", &t);
    for(i =1; i <= t; i++){

        scanf("%d%d", &a, &f);

        for(j = 1; j <=f; j++){

        for(k = 1; k<=a; k++){
                coun = 0;
            for(p=k; p<=k; p=p){
                printf("%d", p);
                coun++;
                if(coun==k) break;
            }
            printf("\n");
        }
        for(k = (a-1); k>=1; k--){
                coun = 0;
            for(p = k; p<=k; p=p){
                printf("%d",p);
                coun++;
                if(coun==k) break;
            }
         printf("\n");
        }
        if(i!=t || j!=f)printf("\n");

        }

    }

    return 0;
}

