#include "StdAfx.h"
#include "ProxySubject.h"
#include <iostream>
using namespace std;


CProxySubject::CProxySubject(void)
{
}


CProxySubject::~CProxySubject(void)
{
	cout << "base proxysubject" << endl;
}


CProxyChildSubject::CProxyChildSubject()
{
}

CProxyChildSubject::~CProxyChildSubject()
{
	cout << "subject proxysubject" << endl;
}



void CProxyChildSubject::request()
{
	cout << "the proxy is running............" << endl;
}