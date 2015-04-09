#include <stdio.h>

main()
{
int counter=0,digits=0;
long int num=0;
int paldig[digits];


printf("enter the number of digits\n");

scanf("%d",&digits);

printf("enter the number");

scanf("%ld",&num);


for(counter=0;num>=0;counter++,digits--)
{

paldig[digits]=num%10;

num/=10;
/******print array elements******/
printf("the %d element of the array is %d",digits,paldig[digits]);
}



}
