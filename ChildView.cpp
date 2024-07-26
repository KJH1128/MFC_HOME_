
// ChildView.cpp : CChildView Ŭ������ ����
//

#include "stdafx.h"
#include "mfc.h"
#include "ChildView.h"
#include "icon.h"
#include <vector>
#include <iostream>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView
std::vector <icon*> icon_list;
std::vector <icon*> select_list;

#define I_NUM 10
#define H_NUM 3
#define O_NUM 3

using namespace std;



CChildView::CChildView()
{




}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()



// CChildView �޽��� ó����

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}
void CChildView::OnPaint()
{
	CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.


	for (const auto e : icon_list)
		e->draw(&dc);
}



void CChildView::OnLButtonDown(UINT nFlags, CPoint point)
{

	
	CWnd::OnLButtonDown(nFlags, point);
	/*
	bool isPush = true;
	

	if (nFlags == MK_LBUTTON)
	{
		std::vector<icon>::iterator iter;

		if(isPush)
			icon_list.push_back(new input_node(point));


		
	}
	*/
	Invalidate();
	
}

void CChildView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
/*
	CWnd::OnMouseMove(nFlags, point);

	if (nFlags == MK_LBUTTON) 
	{
		for (const auto& e : select_list)
		{
		}

	}
	*/



}


void CChildView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	/*
	CWnd::OnLButtonUp(nFlags, point);

	for (const auto& e : select_list)
	{
		
	}
	*/

}


int CChildView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// �ʱ� ũ�� ���
	//������ OnCreate �� â�� ũ�Ⱑ 0 �϶� ����Ǿ GetClientRect�� ����� �ߵ����� �ʴ´�.




	return 0;
}
/*

*/

void CChildView::OnSize(UINT nType, int cx, int cy)
{
	CWnd::OnSize(nType, cx, cy);

	// ��ü����Ʈ�� ��� �ִٸ� ��ü�� �����ϰ�
	// ��ü�� �̹� ������ �Ǿ� �ִٸ� ��ü ��ü�� ���鼭 ��ġ���� �������ش�.

	CRect rect;
	GetClientRect(&rect);

	int w, h;

	w = rect.Width();
	h = rect.Height();


	if (icon_list.size() == 0) {
		for (int i = 0; i < I_NUM; i++) {
			input_node *node = new input_node(w / 6, h / 12 * (i + 1));
			icon_list.push_back(node);
		}
		for (int i = 0; i < I_NUM; i++) {
			hidden_node *node = new hidden_node(w / 6, h / 12 * (i + 1));
			icon_list.push_back(node);
		}
	}
	else if (icon_list.size() != 0) {
		for (int i = 0; i < I_NUM; i++) {
			icon_list.at(i)->coord.x = w / 6;
			icon_list.at(i)->coord.y = h / 12 * (i + 1);
		}
	}

}









