#include <stdio.h>

main()
{
int final_sum=0, threecount, fivecount;

threecount = 3;
while (threecount < 1000)
{
if( threecount % 5 != 0)
{
final_sum = final_sum + threecount;
}
threecount = threecount +3;
}


fivecount = 5;

while (fivecount < 1000)
{
if(fivecount/* % 3 != 0*/)
{
final_sum = final_sum + fivecount;
}
fivecount = fivecount + 5;
}
printf("The sum of all numbers divisible by 3 and 5 under 1000 is %d\n", final_sum);
}
