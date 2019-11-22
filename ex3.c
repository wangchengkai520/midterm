#include <stdio.h>

int main()
{
unsigned long int a = 1;
unsigned long int b = 0;
unsigned long int c = 0-1;
unsigned long int d = c+1;
while (a != 0){
    a = a <<1;
    b = b + 1;
}
printf("the max is %lu\n",c);
printf("the min is %lu\n",d);
printf("unsigned long long int is size of%ld\n",b);
}