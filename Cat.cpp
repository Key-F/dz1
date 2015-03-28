#include "Cat.h"
#include "stdafx.h"


Cat::Cat()
{
	catname=kolfile=catsize=0;
	bool cattype=true;
}
Cat::Cat(const Cat& name, int kol, bool type, int size, File *data)
{
	this->catname=name;
    bool cattype=type;
    this->kolfile=kol;
    this->catsize=size;
	data = new File[size];
}
Cat::~Cat()
{
	delete [] data;
}

Cat &operator=(const Cat &other)
 {
    return copyFrom(other);
 }
Cat &copyFrom(const Cat &other)
   {
    if (this != &other) {
      delete [] data;
      catsize = other.getsize();
      data = new File[catsize];
      for (int i = 0; i < size; ++i) {
        data[i] = other.data[i];
      }
    }
    return *this;
   }



