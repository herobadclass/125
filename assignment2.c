#include <stdio.h>
#include <stdlib.h>
//Jeffrey Feng
//jzfeng@sfu.ca
//301330473

void selection(int arr[], int len)
{
	for(int i = 0; i < len - 1; i ++)
	{
		int min = i;
		for(int j = i + 1; j < len; j ++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void insertion(int arr[], int len)
{
	for(int i = 1; i < len; i ++)
	{
		int next = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > next)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = next;
	}
}
int main()
{
	/*
	int arr1[20000];
	int len1 = 20000;
	
	for(int i = 1; i <= 20000; i ++)	//sorted array from 1-20000 with len 20000
	{
		arr1[i-1] = i;
	}
	
	for(int i = 20000; i > 0; i --)	//reverse sorted array from 20000-1 with len 20000
	{
		arr1[20000-i] = i;
	}
	
	srand(1);
	for(int i = 0; i < 20000; i ++) //randomly generated array with srand(1) with len 20000
	{
		arr1[i] = rand();
	}
	
	srand(2);
	for(int i = 0; i < 20000; i ++)	//randomly generated array with srand(2) with len 20000
	{
		arr1[i] = rand();
	}
	
	srand(3);
	for(int i = 0; i < 20000; i ++)	//randomly generated array with srand(3) with len 20000
	{
		arr1[i] = rand();
	}
	
	int arr2[40000];
	int len2 = 40000;
	
	for(int i = 1; i <= 40000; i ++)	//sorted array from 1-40000 with len 40000
	{
		arr2[i-1] = i;
	}
	
	for(int i = 40000; i > 0; i --)	//reverse sorted array from 40000-1 with len 40000
	{
		arr2[40000-i] = i;
	}
	
	srand(1);
	for(int i = 0; i < 40000; i ++) //randomly generated array with srand(1) with len 40000
	{
		arr2[i] = rand();
	}
	
	srand(2);
	for(int i = 0; i < 40000; i ++)	//randomly generated array with srand(2) with len 40000
	{
		arr2[i] = rand();
	}
	
	srand(3);
	for(int i = 0; i < 40000; i ++)	//randomly generated array with srand(3) with len 40000
	{
		arr2[i] = rand();
	}
	*/
	int arr3[100000];
	int len3 = 100000;
	
	for(int i = 1; i <= 100000; i ++)	//sorted array from 1 to 100000 with len 100000
	{
		arr3[i-1] = i;
	}
	/*
	for(int i = 100000; i > 0; i --)	//reverse sorted array from 100000 to 1 with len 100000
	{
		arr3[100000-i] = i;
	}
	
	srand(1);
	for(int i = 0; i < 100000; i ++) //randomly generated array with srand(1) with len 100000
	{
		arr3[i] = rand();
	}
	
	srand(2);
	for(int i = 0; i < 100000; i ++)	//randomly generated array with srand(2) with len 100000
	{
		arr3[i] = rand();
	}
	*/
	srand(3);
	for(int i = 0; i < 100000; i ++)	//randomly generated array with srand(3) with len 100000
	{
		arr3[i] = rand();
	}
	
	insertion(arr3, len3);

	return 0;
}