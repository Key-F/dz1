#include "File.h"
#include "stdafx.h"

 
File::File();
{

    filename=filetype=filecreator=filesize=0;
}
 
File::File(const File& name, const File& type, const File& creator, int size) //Создание файла со всеми параметрами
{
    this->filename=name;
    this->filetype=type;
    this->filecreator=creator;
    this->filesize=size;
}
 
File::File(const File &Fl)
{
	

}

File::~File() //Удаление файла
{
}
 
void File::setname(File& x) {this->filename=x;} //Задаем имя файла
void File::settype(File& x) {this->filetype=x;} //Задаем тип файла
void File::setsize(int x) {this->filesize=x;} //Задаем размер файла 
void File::setcreator(File& x) {this->filecreator=x;} //Задаем имя создателя
 
string File::getname(File& x)const {return filename;} //Получаем имя файла
string File::gettype(File& x)const {return filetype;} //Получаем тип файла
int File::getsize(int x)const {return filesize;} //Получаем размер файла 
string File::getcreator(File& x)const {return filecreator;} //Получем имя создателя
std::ostream &operator<<(std::ostream &stream, File &H) //перегрузка оператора вЫвода <<
{
    return stream << "File" <<
    "name=" << H.getname() << "," <<
    "type=" << H.gettype() << "," <<
    "size=" << H.getsize() << "," <<
    "creator=" << H.getcreator();
}