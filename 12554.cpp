#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define pn printf
char a[104][104], b[20][10];
int main()
//Happy birthday to you! Happy birthday to you! Happy birthday to Rujia! Happy birthday to you!
{

    int i, j, k, p, q, n;
    strcpy(b[1], "Happy"), strcpy(b[2], "birthday"),strcpy(b[3], "to"),strcpy(b[4], "you"),strcpy(b[5], "Happy"),strcpy(b[6], "birthday"),
    strcpy(b[7], "to"),strcpy(b[8], "you"),strcpy(b[9], "Happy"),strcpy(b[10], "birthday"),strcpy(b[11], "to"),
    strcpy(b[12], "Rujia"),strcpy(b[13], "Happy"),strcpy(b[14], "birthday"),strcpy(b[15], "to"),strcpy(b[16], "you");


    while(scanf("%d ", &n)==1){
        for(i = 1; i<=n; i++){
            gets(a[i]);
        }
        if(n%16==0)p = n;
        else p = ((n/16)*16)+16;
        for(i = 1, j=1, k=1; k<=p; k++){
            printf("%s: %s\n", a[i], b[j]);

            if(j==16)j=1;

            else j++;

            if(i==n)i=1;

            else i++;
        }

    }

    return 0;


}
