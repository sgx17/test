#include <stdio.h>
#include <stdlib.h> 
void quick_sort(int* arr,int from,int to );
int  main(int argc, char const *argv[])
{
	int i;
	int buf[20],size;
	//get input array
	size = argc -1;
	for (i = 1; i < argc ; ++i)
	{
		buf[i - 1] = atoi(argv[i]);
	}
	quick_sort(buf,0,size -1);
	for (i = 0; i < size; ++i)
	{
		printf("%d \t",buf[i] );
	}
	return 0;
}

void quick_sort(int* arr,int from,int to )
{
	int k = arr[from];
	int i = from;
	int j = to;
	int pos = i;
	if(i < j)
	{
		/* one sort here*/
		while(i < j)
		{	
		for (; j >i; --j)
		{
			if(arr[j] < k)
			{

				arr[i] = arr[j];
				arr[j] = k;
				pos = j;
				break;
			}	
		}
		for (; i < j; ++i)
		{
			if (arr[i] > k)
			{
				arr[j] = arr[i];
				arr[i] = k;
				pos = i;
				break;
			}	
		}}
		quick_sort(arr,from,pos - 1);//left sort
		quick_sort(arr,pos + 1,to);//right sort
	}	
}