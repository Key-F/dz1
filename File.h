#pragma once
class File
{
	string filename;
	string filecreator;
	string filetype;
	int filesize;
public:
	File();
	File(File *PH);// создание файла по типу другого
	File(string name, string creator, string type, int size);
	~File();// удаление файла
	string getname();
	string getcreator();
	string gettype();
	int getsize();
	void setname(string name);
	void setcreator(string creator);
	void settype(string type);
	void setsize (int size);
	friend std::ostream &operator<<(std::ostream &output, File &H);
    File operator+(File &);
}