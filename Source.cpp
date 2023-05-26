#include <iostream>
using namespace std;
class Transport
{
public:
	virtual void Name() = 0;
	virtual void price() = 0;

};
class Car :public  Transport
{
public:
	void Name()
	{
		cout << "Car " << endl;
	}
	void price()
	{
		cout << "3 000 $ -- 20 000 $" << endl;
	}
};
class Bicycle :public Transport
{
public:
	void Name()
	{
		cout << "Bicycle " << endl;
	}
	void price()
	{
		cout << "100 $ -- 500 $" << endl;
	}
};
class Plane : public Transport
{
public:
	void Name()
	{
		cout << "Aeroplane " << endl;
	}
	void price()
	{
		cout << "80 mln $ -- 100 mln $" << endl;
	}

};
int main()
{
	Bicycle b;
	cout << "Name : ";
	b.Name();
	cout << "Price : ";
	b.price();
	Car c;
	cout << "Name : ";
	c.Name();
	cout << "Price : ";
	c.price();
	Plane p;
	cout << "Name : ";
	p.Name();
	cout << "Price : ";
	p.price();

	return 0;
}