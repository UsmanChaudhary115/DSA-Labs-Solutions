#include"Array.h"
template<typename T>
void Array<T>::copyArray(T* const destinationArray, const T* const sourceArray, int size)
{
	{
		for (int i = 0; i < size; i = i + 1)
		{
			destinationArray[i] = sourceArray[i];
		}
	}
}
template<typename T>
bool Array<T>::isValidIndex(int index)const
{
	if (data != nullptr && index >= 0 && index < capacity)
	{
		return true;
	}
	return false;
}
template<typename T>
int Array<T>::getCapacity() const
{
	return capacity;
}
template<typename T>
Array<T>::Array()
{
	data = nullptr;
	size = 0;
	capacity = 0;
}
template<typename T>
Array<T>::Array(int s):Array()
{
	if(s > 0)
	{
		data = new T[s];
		size = s;
	}
}
template<typename T>
Array<T>::~Array()
{
	if (data != nullptr)
	{
		delete[] data;
		data = nullptr;
	}
	size = 0;
	capacity = 0;
}
template<typename T>
void Array<T>::display()
{
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
}
template<typename T>
T& Array<T>::operator[](int index)
{
	if (data != nullptr && index >= 0 && index < size)
	{
		T& a = data[index];
		return a;
	}
	exit(0);
}
template<typename T>
int Array<T>::getSize() const
{
	if (data != nullptr)
	{
		return size;
	}
	return 0;
}
template<typename T>
void Array<T>::reSize(int newCapacity)
{
	if (data != nullptr)
	{
		if (newCapacity <= 0)
		{
			this->~Array();
		}
		else
		{
			T* temp = new T[newCapacity];
			if (newCapacity >= capacity)
			{
				copyArray(temp, data, capacity);
			}
			else
			{
				copyArray(temp, data, newCapacity);
			}
			this->~Array();
			data = temp;
			size = newCapacity;
		}
		return;
	}
	data = new T[newCapacity];
	size = newCapacity;
}
template<typename T>
void Array<T>::insert(int index, const T& value)
{
	if (data != nullptr && index < size)
	{
		data[index] = value;
		capacity++;
	}
}
template<typename T>
void Array<T>::remove(int index)
{
	if (data != nullptr && index < capacity)
	{
		data[index] = data[capacity];
		capacity--;
	}
}
template<typename T>
void Array<T>::sort()
{
	for (int i = 0; i < capacity; i = i + 1)
	{
		T lowerValue = data[i];
		for (int j = i; j < capacity; j = j + 1)
		{
			if (lowerValue > data[j])
			{
				lowerValue = data[j];
				T currentValue = data[i];
				data[i] = lowerValue;
				data[j] = currentValue;
			}
		}
	}
}
template<typename T>
Array<T> findElements(Array<T> nums, int k)
{
    Array<T>result(2);
    int i = 0, j = nums.getSize();
    bool status = true;
	while (i != j)
	{
		if (nums[i] + nums[j] == k)
		{
			result.insert(0, nums[i]);
			result.insert(1, nums[i]);
			return result;
		}
		else if (nums[i] + nums[j] < k)
		{
			i++;
		}
		else if (nums[i] + nums[j] > k)
		{
			j--;
		}
	}
	return Array<T>();
}
template<typename T>
int maximumSum(Array<T> nums)
{
	int sum = 0;
	if (nums != nullptr)
	{
		for (int i = 0; i < nums.getCapacity(); i++)
		{
			if (sum < (sum + nums[i]))
			{
				sum += nums[i];
			}
		}
	}
	return sum;
}