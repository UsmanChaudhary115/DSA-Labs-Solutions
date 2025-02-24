#include<iostream>
using namespace std;
int maximumSum(int* nums)
{
	int sum = 0;
	if (nums != nullptr)
	{
		for (int i = 0; i < 5; i++)
		{
			if (sum < (sum + nums[i]))
			{
				sum += nums[i];
			}
		}
	}
	return sum;
}
int main()
{
	int a[5] = { 1,-2,3,4,-7 };
	cout << maximumSum(a);
	return 0;
}