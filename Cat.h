// Copyright [2015] <Filatov Kirill>

#pragma once

#include "File.h"
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
class Cat {
    string catname;
    int kolfile;
    string cattype;
    int catsize;
    std::vector <File> F;

 public:
     Cat();
     Cat(const Cat &Ct);
     Cat(const string& name, int kol, const string& type,
         int size, std::vector <File> F);
     ~Cat();
     const string& getname() const;
     int getkol() const;
     const string& getttype() const;
     int getsize() const;
     void setname(const string& name);
     void setkol(int kolfile);
     void settype(const string& type);
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
};
