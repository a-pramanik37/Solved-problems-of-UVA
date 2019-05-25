#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    char a[100004];
    int i, j, k;
    while(gets(a)){
        for(i = 0; i<strlen(a); i++){
            printf("%c", a[i]-7);
        }
        printf("\n");
    }
    return 0;
}
