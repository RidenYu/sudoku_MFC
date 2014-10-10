// suduxDlg.h : header file
//

#if !defined(AFX_SUDUXDLG_H__322EA53E_353A_4D0C_A72C_851620D7A3C6__INCLUDED_)
#define AFX_SUDUXDLG_H__322EA53E_353A_4D0C_A72C_851620D7A3C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSuduxDlg dialog

class CSuduxDlg : public CDialog
{
// Construction
public:
	CSuduxDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSuduxDlg)
	enum { IDD = IDD_SUDUX_DIALOG };
	int		m_num0;
	int		m_num1;
	int		m_num2;
	int		m_num3;
	int		m_num4;
	int		m_num5;
	int		m_num6;
	int		m_num7;
	int		m_num8;
	int		m_num9;
	int		m_num10;
	int		m_num11;
	int		m_num12;
	int		m_num13;
	int		m_num14;
	int		m_num15;
	int		m_num16;
	int		m_num17;
	int		m_num18;
	int		m_num19;
	int		m_num20;
	int		m_num21;
	int		m_num22;
	int		m_num23;
	int		m_num24;
	int		m_num25;
	int		m_num26;
	int		m_num27;
	int		m_num28;
	int		m_num29;
	int		m_num30;
	int		m_num31;
	int		m_num32;
	int		m_num33;
	int		m_num34;
	int		m_num35;
	int		m_num36;
	int		m_num37;
	int		m_num38;
	int		m_num39;
	int		m_num40;
	int		m_num41;
	int		m_num42;
	int		m_num43;
	int		m_num44;
	int		m_num45;
	int		m_num46;
	int		m_num47;
	int		m_num48;
	int		m_num49;
	int		m_num50;
	int		m_num51;
	int		m_num52;
	int		m_num53;
	int		m_num54;
	int		m_num55;
	int		m_num56;
	int		m_num57;
	int		m_num58;
	int		m_num59;
	int		m_num60;
	int		m_num61;
	int		m_num62;
	int		m_num63;
	int		m_num64;
	int		m_num65;
	int		m_num66;
	int		m_num67;
	int		m_num68;
	int		m_num69;
	int		m_num70;
	int		m_num71;
	int		m_num72;
	int		m_num73;
	int		m_num74;
	int		m_num75;
	int		m_num76;
	int		m_num77;
	int		m_num78;
	int		m_num79;
	int		m_num80;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSuduxDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSuduxDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SUDUXDLG_H__322EA53E_353A_4D0C_A72C_851620D7A3C6__INCLUDED_)
