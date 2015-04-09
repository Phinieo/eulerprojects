#include <stdio.h>
#include <stdbool.h>

int digcount(long int num)
{
int count=0;
for(count = 0; num > 10; num/=10)
{
count++;
}
count++;
return count;
}


main()
{

}
