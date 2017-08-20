// DesignerMode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ProxySubject.h"
#include "Proxy.h"
#include "BaseImage.h"
#include "GamePlayer.h"
#include "UnitTest.h"
#include <iostream>
using namespace std;
void proxyTest()
{
	CProxy *proxy = new CProxy(new CProxyChildSubject());
	proxy->request();
	delete proxy;
	proxy = NULL;
}
void proxyImage()
{
	for (int i = 0; i < 100; i++)
	{
		CImageProxy image(new CChildImage());
		image.Draw();
	}	
}
void proxyGame()
{
	CGameProxy proxy(new CGamePlayer());
	proxy.login("张卫星","123");
	proxy.killBoss();
	proxy.update();
	proxy.exit();
}







int _tmain(int argc, _TCHAR* argv[])
{
	 
	UnitTest ts;
	ts.BridgePattern();
	 
	
	int iexit = 0;
	cin>> iexit;
	return 0;
}

