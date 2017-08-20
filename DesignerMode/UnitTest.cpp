#include "stdafx.h"
#include "UnitTest.h"
#include "Abstraction.h"
#include "AbstractionImp.h"

UnitTest::UnitTest()
{
}


UnitTest::~UnitTest()
{
}

void UnitTest::BridgePattern()
{
	AbstractionImp *pImpA = new ConcreteImpA();
	AbstractionImp *pImpB = new ConcreteImpB();
	Abstraction *pAbsA = new RefineAbstraction(pImpA);
	pAbsA->Operation();
	Abstraction *pAbsB = new RefineAbstraction(pImpB);
	pAbsB->Operation();
	delete pAbsA;
	delete pAbsB;
}