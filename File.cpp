#include "File.h"
#include "stdafx.h"

 
File::File();
{

    filename=filetype=filecreator=filesize=0;
}
 
File::File(const File& name, const File& type, const File& creator, int size, int timec, int timem) //�������� ����� �� ����� �����������
{
    this->filename=name;
    this->filetype=type;
    this->filecreator=creator;
    this->filesize=size;
	this->timeofcr=timec;
	this->timeofmod=timem;
}
 
File::File(const File &Fl)//����������� �����������
{
	this->filename=Fl.filename;
    this->filetype=Fl.filetype;
    this->filecreator=Fl.filecreator;
    this->filesize=Fl.filesize;
	this->timeofcr=Fl.timeofcr;
	this->timeofmod=Fl.timeofmod;
}

File::~File() //�������� �����
{
}
 
void File::setname(File& x) {this->filename=x;} //������ ��� �����
void File::settype(File& x) {this->filetype=x;} //������ ��� �����
void File::setsize(int x) {this->filesize=x;} //������ ������ ����� 
void File::setcreator(File& x) {this->filecreator=x;} //������ ��� ���������
void File::settimec(int x) {this->timeofcr=x;} //������ ����� ��������
void File::settimem(int x) {this->timeofmod=x;} //������ ����� �����������
 
string File::getname(File& x)const {return filename;} //�������� ��� �����
string File::gettype(File& x)const {return filetype;} //�������� ��� �����
int File::getsize(int x)const {return filesize;} //�������� ������ ����� 
string File::getcreator(File& x)const {return filecreator;} //������� ��� ���������
int File::gettimec(int x)const {return timeofcr;} //�������� ����� ��������
int File::gettimem(int x)const {return timeofmod;} //�������� ����� �����������
std::ostream &operator<<(std::ostream &stream, File &H) //���������� ��������� ������ <<
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
