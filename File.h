// Copyright [2015] <Filatov Kirill>

#pragma once

#include <iostream>
#include <string>
#include <algorithm>

class File {
    string filename;
    string filecreator;
    string filetype;
    int filesize;
    int timeofcr;
    int timeofmod;  // time of last modification

 public:
     File(const File& name, const File& creator,
         const File& type, int size, int timeofcr, int timeofmod);
     File();
     File(const File &Fl);
     ~File();
     File& getname() const;
     File& getcreator() const;
     File& gettype() const;
     int getsize() const;
     int gettimec() const;
     int gettimem() const;
     void setname(const File& name);
     void setcreator(const File& creator);
     void settype(const File& type);
     void setsize(int size);
     void settimec(int timec);
     void settimem(int timem);
     friend std::ostream &operator<<(std::ostream &output,  File &H);
     File operator=(const File &);
     bool operator==(const File &);
     void swap(File& Fl);
}
