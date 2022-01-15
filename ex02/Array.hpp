#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T *_arr;
	unsigned int _size;
public:
	Array():_arr(NULL), _size(0) {}
	Array(unsigned int n):_size(n) 
	{
		if (this->_size > 0)
			this->_arr = new T[n];
		else
			this->_arr = NULL;
	}
	Array(Array const &other)
	{
		*this = other;
	}
	~Array()
	{
		delete [] this->_arr;
	}
	Array &operator=(Array const &other)
	{
		this->_size = other._size;
		if (this->_size > 0)
		{
			this->_arr = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_arr[i] = other._arr[i];
		}
		else
			this->_arr = NULL;
		return *this;
	}
	T &operator[](const unsigned int n)
	{
		if (n < this->_size)
			return this->_arr[n];
		else
			throw OutOfRangeException();
	}
	class OutOfRangeException: public std::exception
	{
		const char *what() const throw()
		{
			return "Out of range!";
		}
	};
	unsigned int size() const
	{
		return this->_size;
	}
};




#endif
