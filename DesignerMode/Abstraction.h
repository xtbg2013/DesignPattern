#pragma once
class AbstractionImp;
class Abstraction
{
public:
	virtual ~Abstraction(void);
	virtual void Operation() = 0;
protected:
	Abstraction(void);
};

class RefineAbstraction :public Abstraction
{
public:
	RefineAbstraction(AbstractionImp *pImp);
	~RefineAbstraction();
	void Operation();
	

private:
	AbstractionImp *_pImp;

};

