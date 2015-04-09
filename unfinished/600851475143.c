#include <stdio.h>

main()
{
long bignum = 13195;
long factor = 1,bigfactor = 1,primetester = 1;

for(factor=1;factor<bignum;factor=factor+1)
{
if(bignum % factor == 0)
{
for(primetester = 2;primetester < factor;primetester = primetester + 1)
{
if(factor % primetester == 0)
{
bigfactor = factor;
}
}
}
}
printf("the largest prime factor of 600851475143 is %ld", bigfactor);
}
