#include "stdafx.h"
#include "BaseImage.h"


CBaseImage::CBaseImage()
{
	//printf("create base image subject\n");
}


CBaseImage::~CBaseImage()
{
	//printf("delete base image subject\n");
}

CChildImage::CChildImage()
{
	//printf("create child image subject\n");
}

CChildImage::~CChildImage()
{
	//printf("delete child image subject\n");
}

void CChildImage::Draw()
{
	printf("image is drawing.......\n");
}


CImageProxy::CImageProxy(CBaseImage *pImage)
{
	//printf("create image proxy\n");
	_image = pImage;
}

CImageProxy::~CImageProxy()
{
	//printf("delete image proxy\n");
	delete _image;
}

void CImageProxy::Draw()
{
	_image->Draw();
}