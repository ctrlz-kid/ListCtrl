
// listtestDlg.h : ͷ�ļ�
//

#pragma once

#include "SkinListCtrl.h"
#include "FListCtrl.h"


// ClisttestDlg �Ի���
class ClisttestDlg : public CDialogEx
{
// ����
public:
	ClisttestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_LISTTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	FListCtrl m_list;
};
