# include "iter.hpp"

int main()
{
	int		*arr = new int[10];
	float	*arr_2 = new float[10];

	std::cout << "Before: ";
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Before: ";
	for (int i = 0; i < 10; i++)
	{
		arr_2[i] = i / (float)2;
		std::cout << arr_2[i] << " ";
	}
	std::cout << std::endl << std::endl;

	::iter(arr, 10, &::plus_one);
	std::cout << "After:  ";
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	::iter(arr_2, 10, &::plus_one);
	std::cout << "After:  ";
	for (int i = 0; i < 10; i++)
		std::cout << arr_2[i] << " ";
	std::cout << std::endl;

	delete [] arr;
	delete [] arr_2;

	return (0);
}
