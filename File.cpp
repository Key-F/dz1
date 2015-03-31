#include "File.h"
#include "stdafx.h"

 
File::File();
{

    filename=filetype=filecreator=filesize=0;
}
 
File::File(const File& name, const File& type, const File& creator, int size, int timec, int timem) //Создание файла со всеми параметрами
{
    this->filename=name;
    this->filetype=type;
    this->filecreator=creator;
    this->filesize=size;
	this->timeofcr=timec;
	this->timeofmod=timem;
}
 
File::File(const File &Fl)//конструктор копирования
{
	this->filename=Fl.filename;
    this->filetype=Fl.filetype;
    this->filecreator=Fl.filecreator;
    this->filesize=Fl.filesize;
	this->timeofcr=Fl.timeofcr;
	this->timeofmod=Fl.timeofmod;
}

File::~File() //Удаление файла
{
}
 
void File::setname(File& x) {this->filename=x;} //Задаем имя файла
void File::settype(File& x) {this->filetype=x;} //Задаем тип файла
void File::setsize(int x) {this->filesize=x;} //Задаем размер файла 
void File::setcreator(File& x) {this->filecreator=x;} //Задаем имя создателя
void File::settimec(int x) {this->timeofcr=x;} //Задаем время создания
void File::settimem(int x) {this->timeofmod=x;} //Задаем время модификации
 
string File::getname(File& x)const {return filename;} //Получаем имя файла
string File::gettype(File& x)const {return filetype;} //Получаем тип файла
int File::getsize(int x)const {return filesize;} //Получаем размер файла 
string File::getcreator(File& x)const {return filecreator;} //Получем имя создателя
int File::gettimec(int x)const {return timeofcr;} //Получаем время создания
int File::gettimem(int x)const {return timeofmod;} //Получаем время модификации
std::ostream &operator<<(std::ostream &stream, File &H) //Перегрузка оператора вывода <<
{
    return stream << "File" <<
    "name=" << H.getname() << "," <<
    "type=" << H.gettype() << "," <<
    "size=" << H.getsize() << "," <<
    "creator=" << H.getcreator();
}
File operator=(const File &);
{
	//swap
}


void File::swap(File & Fl)
	{
		std::swap(filename, Fl.filename);
		std::swap(filecreator, Fl.filecreator);
		std::swap(filesize, Fl.filesize);
		std::swap(filetype, Fl.filetype);
		std::swap(timeofcr, Fl.timeofcr);
		std::swap(timeofmod, Fl.timeofmod);
	}
