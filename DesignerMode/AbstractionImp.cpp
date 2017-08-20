#include "stdafx.h"
#include "AbstractionImp.h"
#include <iostream>
using namespace std;


AbstractionImp::AbstractionImp()
{
}


AbstractionImp::~AbstractionImp()
{
}

ConcreteImpA::ConcreteImpA()
{
}

ConcreteImpA::~ConcreteImpA()
{
}

void ConcreteImpA::Operation()
{
	cout <<"this is app A" << endl;
}
ConcreteImpB::ConcreteImpB()
{
}

ConcreteImpB::~ConcreteImpB()
{
}

void ConcreteImpB::Operation()
{
	cout << "this is app B" << endl;
}