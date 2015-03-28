#pragma once
class File
{
	string filename;
	string filecreator;
	string filetype;
	int filesize;
public:
	File();
	File(const File &Fl);// создание файла по типу другого
	File(const File& name, const File& creator, const File& type, int size);
	~File();// удаление файла
	string getname()const;
	string getcreator()const;
	string gettype()const;
	int getsize()const;
	void setname(File& name);
	void setcreator(File& creator);
	void settype(File& type);
	void setsize (int size);
	friend std::ostream &operator<<(std::ostream &output, File &H);
    File operator+(const File &);
}