#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[5000];
    int sum, i, dsum, len, c;

    while(scanf("%s", &a)!=EOF){
        len = strlen(a);
        sum = 0;
        dsum = 0;
        for(i=0; i<len; i++){
            sum = sum*10+(a[i]-48);
            sum = sum%9;
            dsum = dsum+(a[i]-48);
        }

        if(sum==0 && len==1 && a[0]==48) break;

        else if(sum==0){

        c = 0;
        while(dsum>0){
            c++;
            dsum = dsum/9;
        }
        printf("%s is a multiple of 9 and has 9-degree %d.\n",a, c);

        }
        else printf("%s is not a multiple of 9.\n", a);
    }
    return 0;
}
