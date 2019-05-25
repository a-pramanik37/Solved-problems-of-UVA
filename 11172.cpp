#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int a, b, t, i;

    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d%d", &a, &b);
        if(a > b) printf(">\n");
        else if(a < b) printf("<\n");
        else printf("=\n");
    }

    return 0;

}
