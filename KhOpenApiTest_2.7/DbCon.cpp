// DbCon.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "KhOpenApiTest.h"
#include "DbCon.h"
#include "afxdialogex.h"


// CDbCon ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CDbCon, CDialogEx)

CDbCon::CDbCon(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DBCON, pParent)
{

}

CDbCon::~CDbCon()
{
}

void CDbCon::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDbCon, CDialogEx)
END_MESSAGE_MAP()


// CDbCon �޽��� ó�����Դϴ�.
