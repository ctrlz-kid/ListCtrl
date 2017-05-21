
// listtestDlg.h : 头文件
//

#pragma once

#include "SkinListCtrl.h"
#include "FListCtrl.h"


// ClisttestDlg 对话框
class ClisttestDlg : public CDialogEx
{
// 构造
public:
	ClisttestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_LISTTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	FListCtrl m_list;
};
