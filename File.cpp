#include "File.h"
#include "stdafx.h"

 
File::File();
{

    filename=filetype=filecreator=filesize=0;
}
 
File::File(string name, string type, string creator, int size) //�������� ����� �� ����� �����������
{
    this->filename=name;
    this->filetype=type;
    this->filecreator=creator;
    this->filesize=size;
}
 
File::~File() //�������� �����
{
}
 
void File::setname(string x) {this->filename=x;} //������ ��� �����
void File::settype(string x) {this->filetype=x;} //������ ��� �����
void File::setsize(int x) {this->filesize=x;} //������ ������ ����� 
void File::setcreator(string x) {this->filecreator=x;} //������ ��� ���������
 
string File::getname(string x) {return filename;} //�������� ��� �����
string File::gettype(string x) {return filetype;} //�������� ��� �����
int File::getsize(int x) {return filesize;} //�������� ������ ����� 
string File::getcreator(string x) {return filecreator;} //������� ��� ���������
std::ostream &operator<<(std::ostream &stream, File &H) //���������� ��������� ������ <<
{
    return stream << "File" <<
    "name=" << H.getname() << "," <<
    "type=" << H.gettype() << "," <<
    "size=" << H.getsize() << "," <<
    "creator=" << H.getcreator();
}