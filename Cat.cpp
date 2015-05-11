// Copyright [2015] <Filatov Kirill>

#include <iostream>
#include "Cat.h"
#include <string>
#include <vector>
#include <algorithm>

Cat::Cat() {
    catname = "Nothing";
    kolfile = NULL;
    catsize = NULL;
    cattype = "Unknown";
}
Cat::Cat(const Cat& name, int kol, const Cat& type,
       int size, std::vector <File> F) {
    this->catname = name;
    this->cattype = type;
    this->kolfile = kol;
    this->catsize = size;
    this->F = F;
}

Cat::~Cat() {
}

int Cat::countsize(std::vector <File> F) {
    int sum = 0;
    for (int i = 0; i < F.size(); i++)
        sum = sum + F[i].getsize();
    return sum;
}

void Cat::addfile(File& Fl) {
    F.push_back(Fl);
}

void Cat::delfile(File& Fl) {
    int k;
    for (int i = 0; i < F.size(); i++)
        if (F[i] == Fl) {
             F.erase(i);
            std::cout << "File was deleted";
            k++;
        }
    if (k == 0) std::cout << "File not found";
}
Cat Cat::operator=(const Cat &Ct) {
    Cat.swap(*this);
    return *this;
}

File Cat::operator[](int i) {
    return F[i];
}

void Cat::printall() {
    for (int i = 0; i < F.size(); i++)
        std::cout << F[i];
}

void Cat::swap(Cat & Ct) {
     std::swap(catname, Ct.catname);
     std::swap(kolfile, Ct.kolfile);
     std::swap(cattype, Ct.cattype);
     std::swap(catsize, Ct.catsize);
     std::swap(F, Ct.F);
}
Cat& Cat::getname() const {
    return catname;
}

int Cat::getkol() const {
    return kolfile;
}

Cat& Cat::getttype() const {
    return cattype;
}

int Cat::getsize() const {
    return catsize;
}

void Cat::setname(Cat& name) {
    this->catname = name;
}

void Cat::setkol(int kolfile) {
    this->kolfile = kolfile;
}

void Cat::settype(Cat& type) {
    this->cattype = type;
}

void Cat::setsize(int size) {
    this->catsize = size;
}

void Cat::setdata(std::vector <File> F) {
    this->F = F;
}
