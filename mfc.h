
// mfc.h : mfc ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CmfcApp:
// �� Ŭ������ ������ ���ؼ��� mfc.cpp�� �����Ͻʽÿ�.
//

class CmfcApp : public CWinApp
{
public:
	CmfcApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CmfcApp theApp;
