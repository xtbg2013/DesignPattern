#include "stdafx.h"
#include "Target.h"
#include <iostream>
using namespace std;


Target::Target()
{
}


Target::~Target()
{
}

void Target::Request()
{
	cout << "Target::Request" << endl;
}
Adatee::Adatee()
{
}

Adatee::~Adatee()
{
}
void Adatee::SpecificQuest()
{
	cout << "Adatee::SpecificQuest" << endl;
}
Adapter1::Adapter1()
{	
}
Adapter1::~Adapter1()
{
}

void Adapter1::Request()
{
	this->SpecificQuest();
}

Adapter2::Adapter2(Adatee *pAatee)
{
	_pAdatee = pAatee;
}
Adapter2::~Adapter2()
{
	if (_pAdatee != NULL)
	{
		delete _pAdatee;
		_pAdatee = NULL;
	}
}

void Adapter2::Request()
{
	if (_pAdatee != NULL)
		_pAdatee->SpecificQuest();
}
