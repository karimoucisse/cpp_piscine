
#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <stdlib.h>
#include <sstream>

#define RED "\e[0;31m"
#define RESET "\e[0m"

template <typename T>
class Array
{
	public:
		Array<T>(void): _size(0) {this->_array = NULL;}
		Array<T>(unsigned int n): _size(n){
			this->_array = new T[n];
			for(unsigned int i = 0; i < n; i++)
				this->_array[i] = T();
		}
		Array<T>(Array<T> const &cpy){
			if(*this != cpy)
				*this = cpy;
		}
		Array<T> &operator=(Array<T> const &cpy)
		{
			if (this != &cpy)
			{
				delete [] this->_array;
				this->_array = NULL;
				this->_array = new T[cpy.size()];
				for(int i = 0; i < cpy.size(); i++)
					this->_array[i] = cpy._array[i];
			}
			return *this;
		}
		T& operator[](unsigned int index)
		{
			if (index >= size())
			{
				std::ostringstream oss;
				oss << RED << "Array index out of range: tried to access index " << index
				<< ", but array size is " << _size << "." << RESET;
				throw std::out_of_range(oss.str());
			}

			return this->_array[index];
		}
		unsigned int size(void) const
		{
			return this->_size;
		}
		~Array<T>(){delete [] this->_array;}
	private:
		T *_array;
		unsigned int _size;
};

#endif

