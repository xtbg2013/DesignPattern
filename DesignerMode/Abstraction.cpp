#include "StdAfx.h"
#include "Abstraction.h"
#include "AbstractionImp.h"


Abstraction::Abstraction(void)
{
}


Abstraction::~Abstraction(void)
{
}
RefineAbstraction::RefineAbstraction(AbstractionImp *pImp)
{
	 
	_pImp = pImp;
}
 
RefineAbstraction::~RefineAbstraction()
{
	if (_pImp != NULL)
	{
		delete _pImp;
		_pImp = NULL;
	}
	
}
void RefineAbstraction::Operation()
{
	if (_pImp != NULL)
	{
		_pImp->Operation();
	}
}