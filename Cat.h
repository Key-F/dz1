#include "File.h"
class Cat
{
	string catname;
	int kolfile;//���������� ������ � ��������
	bool cattype;// 0-�������
	int catsize;//��������� ������ ������ � ��������
	File *data;
public:
	Cat();
	Cat(Cat *PH);// �������� �������� �� ���� �������
	Cat(string name, int kol, bool type, int size, File *data);
	virtual ~Cat();// �������� ��������
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