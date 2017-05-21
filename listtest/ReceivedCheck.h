#pragma once

// 接收状态的检测
class ReceivedCheck
{
public:
	ReceivedCheck();
	~ReceivedCheck();

	void setReceivedLimit(int ms);
	int getReceivedLimit()			{ return m_ReceivedLimit;  }
	int getState()					{ return m_State; }

	// 复位计数
	void Reset();

	// 接收检测
	void CheckReceived(int ms);

	enum 
	{
		StateReceiving	= 0,        //0
		StateReceived	= 1         //1
	};

private:
	// 检测项（millisecond )
	int m_ReceivedLimit;
	// 当前计数值
	int m_NowValue;;
	// 状态
	int m_State;
};

