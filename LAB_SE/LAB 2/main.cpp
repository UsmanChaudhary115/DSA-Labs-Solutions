#include<iostream>
using namespace std;
void display(double* data, int capacity)
{
	cout << '{';
	if (data != nullptr)
	{
		for (int i = 0; i < capacity; i = i + 1)
		{
			cout << data[i];
			if (i < (capacity - 1))
			{
				cout << ", ";
			}
		}
	}
	cout << '}';
}
void display(int* data,int capacity)
{
	cout << '{';
	if (data != nullptr)
	{
		for (int i = 0; i < capacity; i = i + 1)
		{
			cout << data[i];
			if (i < (capacity - 1))
			{
				cout << ", ";
			}
		}
	}
	cout << '}';
}
int* productExceptSelf(int* nums, int size)
{
	int productOfArray = 1;
	for (int i = 0; i < size; i++)
	{
		productOfArray *= nums[i];
	}
	int* result = new int[size];
	for (int i = 0; i < size; i++)
	{
		result[i] = productOfArray / nums[i];
	}
	return result;
}
double* findAverage(int* nums, int size, int k)
{
	int sizeOfResultant = (size - k + 1);
	int lastTerm = 0;
	int firstTerm = 0;
	double* result = new double[sizeOfResultant];
	double sumOfKTerms = 0;
	for (int i = 0; i < k; i++)
	{
		sumOfKTerms += nums[i];
	}
	for (int i = 0,j = 0; i < sizeOfResultant; i++)
	{
		sumOfKTerms = sumOfKTerms - firstTerm + lastTerm;
		result[i] = sumOfKTerms / k;
		firstTerm = nums[i];
		lastTerm = nums[i + k];
	}
	return result;
 }
int findSqrt(int num)
{
	int upperLimit = num;
	int lowerLimit = 0;
	/*while ((i * i) <= num)
	{
		i++;
	}
	return (i - 1);*/
	
	while (lowerLimit <= upperLimit)
	{
		int middle = (upperLimit + lowerLimit) / 2;
		if (middle * middle == num)
		{
			return middle;
		}
		else if ((middle * middle) > num)
		{
			upperLimit = middle;
		}
		else
		{
			lowerLimit = middle;
		}
		if ((num > (middle * middle)) && num < ((middle + 1) * (middle + 1)))
		{
			return middle;
		}
	}

}
int main()
{
	//int a[6] = { 1,2,3,4,5,6 };
	///*int* b = productExceptSelf(a, 4);
	//display(b, 4);*/
	//double* p=findAverage(a, 6, 4);
	cout << findSqrt(36);
	return 0;
}