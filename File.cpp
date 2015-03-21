#include "File.h"
#include "stdafx.h"

 
File::File();
{

    filename=filetype=filecreator=filesize=0;
}
 
File::File(string name, string type, string creator, int size) //Создание файла со всеми параметрами
{
    this->filename=name;
    this->filetype=type;
    this->filecreator=creator;
    this->filesize=size;
}
 
File::~File() //Удаление файла
{
}
 
void File::setname(string x) {this->filename=x;} //Задаем имя файла
void File::settype(string x) {this->filetype=x;} //Задаем тип файла
void File::setsize(int x) {this->filesize=x;} //Задаем размер файла 
void File::setcreator(string x) {this->filecreator=x;} //Задаем имя создателя
 
string File::getname(string x) {return filename;} //Получаем имя файла
string File::gettype(string x) {return filetype;} //Получаем тип файла
int File::getsize(int x) {return filesize;} //Получаем размер файла 
string File::getcreator(string x) {return filecreator;} //Получем имя создателя
std::ostream &operator<<(std::ostream &stream, File &H) //перегрузка оператора вЫвода <<
{
    return stream << "File" <<
    "name=" << H.getname() << "," <<
    "type=" << H.gettype() << "," <<
    "size=" << H.getsize() << "," <<
    "creator=" << H.getcreator();
}