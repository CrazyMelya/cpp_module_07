#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
T	plus_one(T a)
{
	return (++a);
}

template <typename T>
void iter(T *arr, int size, T (*func)(T))
{
	for (int i = 0; i < size; i++)
		arr[i] = func(arr[i]);
}

#endif 
