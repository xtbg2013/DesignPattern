#include "StdAfx.h"
#include "Proxy.h"



CProxy::CProxy(CProxySubject *proxy)
{
	_proxy = proxy;
}


CProxy::~CProxy(void)
{
	delete _proxy;
	_proxy = NULL;
}
void CProxy::request()
{
	_proxy->request();
}
