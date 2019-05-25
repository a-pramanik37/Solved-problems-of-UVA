#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50], ch;
    int len1, len2, comp, t, i=0, j;
    scanf("%d ", &t);

    while(t>0){
        gets(a);
       scanf("%s", &d);
        i++;
        len1 = strlen(a);
        len2  = strlen(b);
        comp = strcmp(a, b);


            if(comp==0) printf("Case %d: Yes\n", i);
            else {
                for(j = 0; j <len1; j++){
                    if(a[j]!=' ')
                    {
                        if(a[j]!=b[j]){
                       printf("Case %d: Wrong Answer\n", i);
                       break;
                        }
                    }
                    if(a[j]==' ')
                    {
                        if(a[j]!=b[j]){
                        printf("Case %d: Output Format Error\n", i);
                        break;
                        }
                    }
                }

            }

        t--;
                }

    return 0;
}
