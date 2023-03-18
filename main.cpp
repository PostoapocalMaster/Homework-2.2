#include<stdio.h>

/*https://github.com/PostoapocalMaster/Homework-2.2*/
/*В этом задании я заменил "Bolshe" "Menshe" и "Ravno" заменил символами ">" "<" "="*/

main()
{
	int a,b;
	
	printf("a=");
	scanf("%i",&a);
	
	printf("b=");
	scanf("%i",&b);
	
	if(a>b)
	{
		printf("a>b");
	}
	else
	{
		if(a<b)
		{
			printf("a<b");
		}
		else
		{
			printf("a=b");
		}
		/*вариант с if:
		
		if("a=b")
		{
		    printf("a=b");
		}
		*/
	}
}