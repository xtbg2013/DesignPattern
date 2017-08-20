#pragma once
class CBaseGamePlayer
{
public:
	virtual ~CBaseGamePlayer();
	virtual void login(char *name,char *password) =0;
	virtual void exit() = 0;
	virtual void killBoss() = 0;
	virtual void update() = 0;
protected:
	CBaseGamePlayer();
};

class CGamePlayer :public CBaseGamePlayer
{
public:
	CGamePlayer();
	~CGamePlayer();
	void login(char *name, char *password);
	void exit();
	void killBoss();
	void update();
private:
	char *_name;

};



class CGameProxy :public CBaseGamePlayer
{
public:
	CGameProxy(CBaseGamePlayer *player);
	~CGameProxy();
	void login(char *name, char *password);
	void exit();
	void killBoss();
	void update();
private:
	CBaseGamePlayer *_player;

};

