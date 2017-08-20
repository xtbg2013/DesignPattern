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
	printf("游戏玩家：%s已经登录\n", _name);
}
void CGamePlayer::exit()
{
	printf("游戏玩家：%s已经退出\n", _name);
}
void CGamePlayer::killBoss()
{
	printf("游戏玩家：%s已经击杀BOSS成功\n", _name);

}
void CGamePlayer::update()
{
	printf("游戏玩家：%s升级成功\n", _name);
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