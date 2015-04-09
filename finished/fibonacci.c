#include <stdio.h>

main()
{
int fibtot=0, fib1=1, fib2=2, fib3=2;

while(fib3 < 4000000)
{
if (fib3 % 2 == 0)
{
fibtot = fibtot + fib3;
}

fib3 = fib1 + fib2;
fib1 = fib2;
fib2 = fib3;

}
printf("the total of all even numers in the fibonacci sequence under 4 million is %d\n", fibtot);
}
