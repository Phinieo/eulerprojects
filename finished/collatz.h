

unsigned long long int even(unsigned long long int x)
        {
        if(x%2==0)
                {
                return x/2;
                }
        else
                {
                return x;
                }
        }

unsigned long long int odd(unsigned long long int x)
	{
	if(x%2==1)
		{
		return 3 * x + 1;
		}
	else
		{
		return x;
		}
	}

