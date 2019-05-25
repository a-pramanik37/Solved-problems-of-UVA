#include <stdio.h>
#include <string.h>
int main()
{
    char a[25], b[25];
    int i, j, t, l1, l2, flg;
    scanf("%d", &t);
    for(j = 1; j <= t; j++){
        scanf("%s%s", &a, &b);
        l1 = strlen(a);
        l2 = strlen(b);

        if(l1!=l2) printf("No\n");

        else if(l1==l2){
                flg = 0;
            for(i = 0; i < l1; i++){
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
                    if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u') {
                            flg = 0;

                    }
                    else {
                            flg = 1;
                            break;
                    }

                }
                if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
                    if(a[i]==b[i]){
                        flg = 0;

                    }
                else {
                        flg = 1;
                        break;
                }
                }
            }
             if(flg==0) printf("Yes\n");
             else printf("No\n");

        }

    }
    return 0;
}
