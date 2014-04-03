#include <stdio.h>
void asort(int* arr,int size);
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
	//asort(buf,size);
	quick_sort(buf,0,size - 1);
	for (i = 0; i < size; ++i)
	{
		printf("%d \t",buf[i] );
	}
	printf("\n");
	return 0;
}


void asort(int* arr,int size)
{
	int i,temp;
	if (size <= 1)
	{
		return;
	}
	for (i = 0; i < (size - 1) ; i++)
	{
		if (arr[i] > arr[i+1])
		{
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	asort(arr,size -1);
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

			while(j>i && arr[j] > k)
				j--;
			if(j>i)
			{
				arr[pos] = arr[j];
				pos = j;
			}
			while(i<j && arr[i]<k)
				i++;
			if (i< j)
			{
				arr[pos] = arr[i];
				pos = i;

			}
		}
		arr[pos] = k;		
		quick_sort(arr,from,pos - 1);//left sort
		quick_sort(arr,pos + 1,to);//right sort
	}	
}