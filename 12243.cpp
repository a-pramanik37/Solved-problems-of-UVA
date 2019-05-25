#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[500];
    int len , i, space, c, flg;
    while(gets(a)){
        len = strlen(a);
        c=0;
        if(len==1 & a[0]=='*') break;
        for(i = 0; i<len; i++){
            if(a[i]==' ') c++;
        }
        if(c==0) printf("Y\n");


        for(i = 0; i<len; i++){
            if(a[i]>=65 && a[i]<=90){
                a[i] = a[i]+32;
            }
        }
        flg = 0;
        for(i = 0; i<len; i++){
            if(a[i]==' '){
                if(a[i+1]!=a[0]){
                    flg = 1;
                    break;
                }
            }
        }
        if(flg==0) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
