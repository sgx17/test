#include <stdio.h>
void asort(int* arr,int size);
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
	asort(buf,size);
	for (i = 0; i < size; ++i)
	{
		printf("%d \t",buf[i] );
	}
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
