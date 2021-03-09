#include <stdio.h>
#include "fizzbuzzH.h"

int fbindex(int n)
{
int i = 0;
if(n % FIZZ_VALUE == 0) i += 1;
if(n % BUZZ_VALUE == 0) i += 2;
return i; 
}


