#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int low,high;
	printf("enter the string:\n");
	scanf("%s",str);
	
	low=0;
	high=strlen(str)-1;
	while(low<high)
	{
		if (str[low]!= str[high])
		{
			printf("%s is not a palindrome.\n",str);
			return 0;
		}
		low++;
		high--;
	}
	printf("%s is a palindrome.\n",str);
	return 0;
	 
}
