#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000005], ch;
    int n, a, b, i, g=0, flg, j, len, c;

    while(scanf("%c", &ch)!=EOF){
            g++;



           if(ch!='\r'){
                scanf("%s", &arr);
        scanf("%d", &n);

        for(i = 1; i<=n; i++){
            scanf("%d%d", &a, &b);
            if(b<a){
                c=a;
                a=b;
                b=c;
            }
            flg = 0;

            if(a==0 && ch==arr[0]){
                for(j=1; j<b; j++){
                   if(arr[j]!=ch){
                    flg =1;
                    break;
                   }
                }
            }

            else {
                for(j = a; j<b; j++){
                    if(arr[j]!=arr[a-1]){
                        flg = 1;
                        break;
                    }
                }
            }


            if(i==1) printf("Case %d:\n", g);
            if(flg==1)printf("No\n");
            else printf("Yes\n");
        }
    }
    else if(ch=='\r') break;
    }
    return 0;
}
