#include <stdio.h>
#include <string.h>
int main()
{
    char a[90000], b[90000];

    int i, j, len1, len2, k, flg, count;

    while(scanf("%s%s", &a, &b)!=EOF){

        len1 = strlen(a);
        len2  =strlen(b);


        int p = 0;
        int ans = 0;
        for(i = 0; i<len1; i++){
                  flg = 0;
            for(j = p; j<len2; j++){

                if(a[i]==b[j]){

                        p = j+1;
                        flg = 1;
                break;
                }

            }
            if(flg==0){
                ans = 1;
                break;
            }
        }
        if(ans==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;

}
