// TimerWnd.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "listtest.h"
#include "TimerWnd.h"

int TimerWnd::sTimerWndID = 0x9100;

// TimerWnd

IMPLEMENT_DYNAMIC(TimerWnd, CWnd)

TimerWnd::TimerWnd()
{

}

TimerWnd::~TimerWnd()
{
}


BEGIN_MESSAGE_MAP(TimerWnd, CWnd)
	ON_WM_TIMER()
END_MESSAGE_MAP()



// TimerWnd ��Ϣ�������




BOOL TimerWnd::Create(CWnd* parentWnd)
{
	return CWnd::Create("", "", WS_CHILD, CRect(0, 0, 0, 0), parentWnd, sTimerWndID++);
}


void TimerWnd::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CWnd::OnTimer(nIDEvent);
}
