#include <stdio.h>
int main()
{
    int n, b, h, w, i, j, k, flg, tk, beds, ans, min;

    while(scanf("%d%d%d%d", &n, &b, &h, &w)==4){
            flg=0;
            min =600000;
        for(i = 1; i <=h; i++){
            scanf("%d", &tk);
            for(j = 1; j<= w; j++){
                scanf("%d", &beds);
                if(beds>=n &&(n*tk)<=b){
                    flg=1;
                  ans=n*tk;
                  if(ans<min) min = ans;
                  }
            }

        }
    if(flg==1) printf("%d\n", min);
    else printf("stay home\n");
    }
    return 0;
}
