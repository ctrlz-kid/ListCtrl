// TimerWnd.cpp : 实现文件
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



// TimerWnd 消息处理程序




BOOL TimerWnd::Create(CWnd* parentWnd)
{
	return CWnd::Create("", "", WS_CHILD, CRect(0, 0, 0, 0), parentWnd, sTimerWndID++);
}


void TimerWnd::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CWnd::OnTimer(nIDEvent);
}
