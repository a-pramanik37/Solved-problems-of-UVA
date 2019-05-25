#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',strlen(str));
   puts(str);

   return(0);
}
