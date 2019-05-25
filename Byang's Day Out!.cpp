#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    int t, a, b, c, i;

    scanf("%d", &t);

    for(i = 1; i<=t; i++){
        scanf("%d%d%d", &a, &b, &c);

        if(a+b>=c && b+c>=a && c+a>=b) printf("Yes\n");

        else printf("No\n");
    }
    return 0;
}
