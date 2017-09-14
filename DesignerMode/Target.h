#pragma once
class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
};
class Adatee
{
public:
	Adatee();
	~Adatee();
	void SpecificQuest();
private:
};


class Adapter1 :public Target, private Adatee
{
public:
	Adapter1();
	~Adapter1();
	void Request();

private:

};


class Adapter2 :public Target
{
public:
	Adapter2(Adatee *pAdatee);
	~Adapter2();
	void Request();

private:
	Adatee *_pAdatee;

};

