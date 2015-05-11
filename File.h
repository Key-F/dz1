// Copyright [2015] <Filatov Kirill>

#pragma once

#include <iostream>
#include <string>
#include <algorithm>

using std::string;

class File {
    string filename;
    string filecreator;
    string filetype;
    int filesize;
    int timeofcr;
    int timeofmod;  // time of last modification

 public:
     File(const string& name, const string& creator,
         const string& type, int size, int timeofcr, int timeofmod);
     File();
     File(const File &Fl);
     ~File();
     const string& getname() const;
     const string& getcreator() const;
     const string& gettype() const;
     int getsize() const;
     int gettimec() const;
     int gettimem() const;
     void setname(const string& name);
     void setcreator(const string& creator);
     void settype(const string& type);
     void setsize(int size);
     void settimec(int timec);
     void settimem(int timem);
     friend std::ostream &operator<<(std::ostream &output,  File &H);
     File operator=(const File &);
     bool operator==(const File &);
     void swap(File& Fl);
};
