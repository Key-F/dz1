// Copyright [2015] <Filatov Kirill>

#pragma once

#include "File.h"
#include <string>
#include <vector>
#include <algorithm>

class Cat {
    string catname;
    int kolfile;
    string cattype;
    int catsize;
    std::vector <File> F;

 public:
     Cat();
     Cat(const Cat &Ct);
     Cat(const Cat& name, int kol, const Cat& type,
         int size, std::vector <File> F);
     ~Cat();
     Cat& getname() const;
     int getkol() const;
     Cat& getttype() const;
     int getsize() const;
     void setname(const Cat& name);
     void setkol(int kolfile);
     void settype(const Cat& type);
     void setsize(int size);
     void setdata(std::vector <File> F);
     void addfile(const File& FL);
     void delfile(const File& FL);
     void printall();
     int countsize(std::vector <File> F);
     friend std::ostream &operator<<(std::ostream &output, Cat &H);
     File operator[](int i);
     Cat operator=(const Cat &);
     Cat operator+(const Cat &);
     void swap(Cat& Ct);
}
