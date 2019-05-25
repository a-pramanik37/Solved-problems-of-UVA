#include <bits/stdc++.h>
#include <string.h>

using namespace std;
int main()
{
    int t, i, b[200], len, j, c, cm;
    char a[200];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%s", &a);
        len  = strlen(a);
        c = 0;
        cm = 0;
        for(j=0; j<len; j++){
            if(a[j]=='.'){
                c++;
            }
            if(a[j]!='.'){

                if(c<3 || c==3){
                    cm++;
                }
                else if()
                c=0;
            }
        }
    }
}
