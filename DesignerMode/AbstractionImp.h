#pragma once
class AbstractionImp
{
public:
	virtual ~AbstractionImp();
	virtual void Operation() = 0;
protected:
	AbstractionImp();

};
class ConcreteImpA:public AbstractionImp
{
public:
	ConcreteImpA();
	~ConcreteImpA();
	virtual void Operation();

private:

};

class ConcreteImpB :public AbstractionImp
{
public:
	ConcreteImpB();
	~ConcreteImpB();
	virtual void Operation();

private:

};


