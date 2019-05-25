#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int i;
    char a[100];

    while(scanf("%s", a)==1){

            strcpy(a, b);
        int sum = 0;

        for(i = 0; i<strlen(a); i++){

            sum = sum*16+(a[i]-48);

        }
        printf("%d\n", sum);

    }
    return 0;

}
