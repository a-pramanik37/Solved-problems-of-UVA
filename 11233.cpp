#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
char a[200][50], b[200][50];
int main()

{
    int i, j,k, l, n, p, q, flg, x;

    char c[200][50];

    while(scanf("%d%d", &l, &n)==2){
        for(i = 1; i<=l; i++){
            scanf("%s%s", a[i], b[i]);
        }

        for(i = 1; i<=n; i++){
            scanf("%s", c[i]);
        }

        for(x = 1; x<=n; x++){
                p = strlen(c[x])-1;
                 flg = 0;
                for(j = 1; j<=l; j++){
                    if(strcmp(c[x], a[j])==0){
                        printf("%s\n", b[j]);
                        flg = 1;
                        break;
                    }
                }

            if(flg==0){

             if(c[x][p]=='y' && c[x][p-1]!='a' && c[x][p-1]!='e' && c[x][p-1]!='i'&&c[x][p-1]!='o' &&c[x][p-1]!='u'){
                for(j = 0; j<strlen(c[x])-1; j++){
                    printf("%c", c[x][j]);
                }
                printf("ies\n");
            }
            else if(c[x][p]=='o' || c[x][p]=='s'||(c[x][p-1]=='c'&&c[x][p]=='h')||(c[x][p-1]=='s' && c[x][p]=='h') || c[x][p]=='x'){
                printf("%s", c[x]);
                printf("es\n");
            }
            else{
            printf("%s", c[x]);
            printf("s\n");
        }

        }

        }
    }
    return 0;
}
