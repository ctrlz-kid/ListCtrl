#pragma once

// ����״̬�ļ��
class ReceivedCheck
{
public:
	ReceivedCheck();
	~ReceivedCheck();

	void setReceivedLimit(int ms);
	int getReceivedLimit()			{ return m_ReceivedLimit;  }
	int getState()					{ return m_State; }

	// ��λ����
	void Reset();

	// ���ռ��
	void CheckReceived(int ms);

	enum 
	{
		StateReceiving	= 0,        //0
		StateReceived	= 1         //1
	};

private:
	// ����millisecond )
	int m_ReceivedLimit;
	// ��ǰ����ֵ
	int m_NowValue;;
	// ״̬
	int m_State;
};

