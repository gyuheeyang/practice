#include<stdio.h>
#define NUMBER 5 
int main()
{
	int array[NUMBER];
	int i, oddMax, evenMax; // È¦¼ö ÃÖ´ñ°ª, Â¦¼ö ÃÖ´ñ°ª 
	oddMax = 0;
	evenMax = 0;
	for(i = 0; i< NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if (array[i]%2 ==0)
		{
			if (evenMax< array[i])
			{
				evenMax = array[i];
			}
		}
		else
		{
			if (oddMax <array[i])
			{
				oddMax = array[i];
			}
		}
	}
	
	printf("Â¦¼öÀÇ ÃÖ´ñ°ªÀº %dÀÌ°í È¦¼öÀÇ ÃÖ´ñ°ªÀº %dÀÌ´Ù.", evenMax, oddMax);
	return 0;
}
