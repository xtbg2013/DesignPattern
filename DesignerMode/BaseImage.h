#pragma once
class CBaseImage
{
public:
	virtual ~CBaseImage();
	virtual void Draw() = 0;
protected:
	CBaseImage();
};
class CChildImage:public CBaseImage
{
public:
	CChildImage();
	~CChildImage();
	void Draw();
private:
};
class CImageProxy :public CBaseImage
{
public:
	CImageProxy(CBaseImage *pImage);
	~CImageProxy();
	void Draw();
private:
	CBaseImage *_image;

};




