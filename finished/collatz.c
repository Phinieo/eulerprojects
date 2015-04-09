#include <stdio.h>
#include "collatz.h"

main()
{
unsigned long long int i;
unsigned long long int chain=1;
unsigned long long int y=0;
unsigned long long int final=0;
unsigned long long int fini=0;
for(i=3; i!=1000000; i++, chain=1)
	{
	y=i;
	while(y!=1)
		{
		if(even(y)==y)
			{
			y = odd(y);
			chain++;
			}
		else
			{
			y = even(y);
			chain++;
			}
		if(chain>final)
			{
			final = chain;
			fini = i;
			}
		}
	}

printf("longest chain= %llu at %llu\n",final,fini);
}
