#pragma once
class CProxySubject
{
public:
	virtual ~CProxySubject(void);
	virtual void request() = 0;
protected:
	CProxySubject(void);
};

class CProxyChildSubject :public CProxySubject
{
public:
	CProxyChildSubject();
	~CProxyChildSubject();
	void request();

private:

};

