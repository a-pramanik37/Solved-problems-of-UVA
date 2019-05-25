#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int n, i=0, j, maxx, minn, ar[10000], x;

    char a[200][15], ch[100];

    int flg;
    int flg2 = 0;

    scanf("%d", &n);

    while(n!=0){

        getchar();
        gets(ch);
        if(strcmp(ch, "right on")!=0){
            strcpy(a[i], ch);
            ar[i] = n;
            i++;

        }
        else if(strcmp(ch, "right on")==0){

                x = n;
            flg = 0;
            for(j = i-1; j>=0; j--){
                if(x<=ar[j] && strcmp(a[j], "too low")==0){
                    flg=1;
                    break;
                }
                if(x>=ar[j] && strcmp(a[j], "too high")==0){
                    flg = 1;
                    break;
                }

            }
            if(flg==1) printf("Stan is dishonest\n");
            else printf("Stan may be honest\n");

            i=0;

        }
        scanf("%d", &n);
    }

    return 0;

}

