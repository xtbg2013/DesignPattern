#pragma once

#include "ProxySubject.h"
class CProxy : public CProxySubject
{
public:
	CProxy(CProxySubject *proxy);
	~CProxy(void);
	void request();
private:
	CProxySubject *_proxy;
};

