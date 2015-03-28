#include "File.h"
#include "stdafx.h"

 
File::File();
{

    filename=filetype=filecreator=filesize=0;
}
 
File::File(const File& name, const File& type, const File& creator, int size) //�������� ����� �� ����� �����������
{
    this->filename=name;
    this->filetype=type;
    this->filecreator=creator;
    this->filesize=size;
}
 
File::File(const File &Fl)
{
	

}

File::~File() //�������� �����
{
}
 
void File::setname(File& x) {this->filename=x;} //������ ��� �����
void File::settype(File& x) {this->filetype=x;} //������ ��� �����
void File::setsize(int x) {this->filesize=x;} //������ ������ ����� 
void File::setcreator(File& x) {this->filecreator=x;} //������ ��� ���������
 
string File::getname(File& x)const {return filename;} //�������� ��� �����
string File::gettype(File& x)const {return filetype;} //�������� ��� �����
int File::getsize(int x)const {return filesize;} //�������� ������ ����� 
string File::getcreator(File& x)const {return filecreator;} //������� ��� ���������
std::ostream &operator<<(std::ostream &stream, File &H) //���������� ��������� ������ <<
{
    return stream << "File" <<
    "name=" << H.getname() << "," <<
    "type=" << H.gettype() << "," <<
    "size=" << H.getsize() << "," <<
    "creator=" << H.getcreator();
}