#pragma once
class File
{
	string filename;
	string filecreator;
	string filetype;
	int filesize;
	int timeofcr;//время создания
	int timeofmod;//время последней модификации
public:
	File(const File& name, const File& creator, const File& type, int size, int timeofcr, int timeofmod);
	File();
	File(const File &Fl);// создание файла по типу другого
	~File();// удаление файла
	File& getname(File&)const;
	File& getcreator(File&)const;
	File& gettype(File&)const;
	int getsize(File&)const;
	int gettimec(File&)const;
	int gettimem(File&)const;
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