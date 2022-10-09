#include <iostream>
template <typename T>
void show_arr(T arr[], const int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b.\n\n";
}
void swapping_num(int* pa, int length)
{
	 for (int i = 0; i < length; i++)
	 {
		 if (i % 2 == 0)
			 std::swap(*pa, *(pa + 1));
		 pa++;
	 }
}
template <typename T>
void swap_show_arr(T *pa,T length) 
{
	for (int i = 0; i < length; i++)
		std::cout << pa[i] << ", ";
		std::cout << "\b\b.\n\n";
}
void power_num(int* n, int pow)
{
	int res = *n;
	for (int i = 1; i < pow; i++)
		res *= *n;
	std::cout << res;
}
int main ()
{
	//T1
	const int  size = 10;
	int arr[size]{ 1,2,3,4,5,6,7,8,9,10 };
	show_arr(arr, size);
	int* pa; 
	pa = arr;
	swapping_num(pa, size);
	swap_show_arr(pa, size);
	
	//T2
	int n = 10;
	power_num(&n, 3);

	return 0;
}