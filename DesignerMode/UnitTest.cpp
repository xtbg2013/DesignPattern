#include "stdafx.h"
#include "UnitTest.h"
#include "Abstraction.h"
#include "AbstractionImp.h"
#include "Target.h"

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

void UnitTest::AdapterPattern()
{
	Target *pTargetA = new Adapter2(new Adatee());
	pTargetA->Request();
	delete pTargetA;
	Target *pTargetB = new Adapter1();
	pTargetB->Request();
	delete pTargetB;
}