#pragma once


// TimerWnd
class TimerWnd : public CWnd
{
	DECLARE_DYNAMIC(TimerWnd)

public:
	TimerWnd();
	virtual ~TimerWnd();
protected:
	DECLARE_MESSAGE_MAP()
public:
	BOOL Create(CWnd* parentWnd);
	

protected:
	static int sTimerWndID;

public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};


