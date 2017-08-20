#include "stdafx.h"
#include "GamePlayer.h"


CBaseGamePlayer::CBaseGamePlayer()
{
}


CBaseGamePlayer::~CBaseGamePlayer()
{
}
CGamePlayer::CGamePlayer()
{
}

CGamePlayer::~CGamePlayer()
{
}

void CGamePlayer::login(char *name, char *password)
{
	_name = name;
	printf("��Ϸ��ң�%s�Ѿ���¼\n", _name);
}
void CGamePlayer::exit()
{
	printf("��Ϸ��ң�%s�Ѿ��˳�\n", _name);
}
void CGamePlayer::killBoss()
{
	printf("��Ϸ��ң�%s�Ѿ���ɱBOSS�ɹ�\n", _name);

}
void CGamePlayer::update()
{
	printf("��Ϸ��ң�%s�����ɹ�\n", _name);
}


CGameProxy::CGameProxy(CBaseGamePlayer *player)
{
	_player = player;
}

CGameProxy::~CGameProxy()
{
	delete _player;
}

void CGameProxy::login(char *name, char *password)
{
	_player->login(name, password);
}
void CGameProxy::exit()
{
	_player->exit();
}
void CGameProxy::killBoss()
{
	_player->killBoss();
}
void CGameProxy::update()
{
	_player->update();
}