#include <bits/stdc++.h>
using namespace std;
int main()
{
        int i, j, k, p, q, x, y, lo[26], up[26], max;

        char a[10000], t1[10005], t2[10000];

        while(gets(a)){
                memset(lo, 0, sizeof lo);
        memset(up, 0, sizeof up);
        max = -12231;
            for(i=0; i<strlen(a); i++){
                if(a[i]>=97 && a[i]<=122){
                    k = a[i]-'a';
                    lo[k]++;
                    if(lo[k]>max) max = lo[k];
                }
                else if(a[i]>=65 && a[i]<=90){
                    k = a[i]-'A';
                    up[k]++;
                    if(up[k]>max) max = up[k];
                }
            }
            x = 0;
            for(i = 0; i<26; i++){
                if(up[i]==max){
                    t1[x] = i+65;
                    x++;
                }
            }
            t1[x] = '\0';

            y = 0;
            for(i = 0; i<26; i++){
                if(lo[i]==max){
                    t2[y] = i+97;
                    y++;
                }
            }
            t2[y]='\0';

            if(x!=0 && y==0){
                printf("%s %d\n", t1, max);
            }
            else if(x==0 && y!=0){
                printf("%s %d\n", t2, max);
            }

            else {
                strcat(t1, t2);
                printf("%s %d\n", t1, max);
            }

        }
        return 0;
}
