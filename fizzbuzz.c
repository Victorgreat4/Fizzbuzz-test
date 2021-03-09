#include <stdio.h>
int fbindex(int n)
{
int i = 0;
if(n % 3 == 0) i += 1;
if(n % 5 == 0) i += 2;
return i; 
}

int main(void){
	int n = 0;
	printf("How long do you want fizzbuzz to be?\n");
	scanf("%d",&n);
/*
First solo upload test!
*/
const char *fb[] = {"%d\n", "Fizz\n", "Buzz\n", "FizzBuzz\n"};
for(int i = 1; i <= n; i++)
{
printf(fb[fbindex(i)],i);
}


return 0;
}
