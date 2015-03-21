#include "File.h"
class Cat
{
	string catname;
	int kolfile;//количество файлов в каталоге
	bool cattype;// 0-скрытый
	int catsize;//суммарный размер файлов в каталоге
	File *data;
public:
	Cat();
	Cat(Cat *PH);// создание каталога по типу другого
	Cat(string name, int kol, bool type, int size, File *data);
	virtual ~Cat();// удаление каталога
	string getname();
	int getkol();
	bool cattype();
	int getsize();
	void setname(string name);
	void setkol(int kol);
	void settype(bool type);
	void setsize (int size);
	//Cat &copyFrom(const Cat &other);
	friend std::ostream &operator<<(std::ostream &output, Cat &H);
	Cat operator=(Cat &);
    Cat operator+(Cat &);
}