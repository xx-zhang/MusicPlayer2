// CoverDownloadDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "MusicPlayer2.h"
#include "CoverDownloadDlg.h"
#include "afxdialogex.h"


// CCoverDownloadDlg 对话框

IMPLEMENT_DYNAMIC(CCoverDownloadDlg, CDialog)

CCoverDownloadDlg::CCoverDownloadDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_COVER_DOWNLOAD_DIALOG, pParent)
{

}

CCoverDownloadDlg::~CCoverDownloadDlg()
{
}

void CCoverDownloadDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCoverDownloadDlg, CDialog)
END_MESSAGE_MAP()


// CCoverDownloadDlg 消息处理程序
