#pragma once
#include "CoverDownloadCommon.h"

// CCoverDownloadDlg 对话框

class CCoverDownloadDlg : public CDialog
{
	DECLARE_DYNAMIC(CCoverDownloadDlg)

public:
	CCoverDownloadDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CCoverDownloadDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COVER_DOWNLOAD_DIALOG };
#endif

protected:
	vector<CInternetCommon::ItemInfo> m_down_list;	//搜索结果的列表

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
