// DbCon.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "KhOpenApiTest.h"
#include "DbCon.h"
#include "afxdialogex.h"


// CDbCon 대화 상자입니다.

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


// CDbCon 메시지 처리기입니다.
