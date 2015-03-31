#pragma once
class File
{
	string filename;
	string filecreator;
	string filetype;
	int filesize;
	int timeofcr;//����� ��������
	int timeofmod;//����� ��������� �����������
public:
	File();
	File(const File &Fl);// �������� ����� �� ���� �������
	File(const File& name, const File& creator, const File& type, int size, int timeofcr, int timeofmod);
	~File();// �������� �����
	string getname()const;
	string getcreator()const;
	string gettype()const;
	int getsize()const;
	int gettimec()const;
	int gettimem()const;
	void setname(File& name);
	void setcreator(File& creator);
	void settype(File& type);
	void setsize (int size);
	void settimec (int timec);
	void settimem (int timem);
	friend std::ostream &operator<<(std::ostream &output, File &H);
    File operator+(const File &);
	File operator=(const File &);
	File operator==(const File &);
	void swap(File & Fl);
}