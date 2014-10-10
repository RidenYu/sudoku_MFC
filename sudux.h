// sudux.h : main header file for the SUDUX application
//

#if !defined(AFX_SUDUX_H__DF1E798C_E12E_4B4E_A663_BAD3DE98E51E__INCLUDED_)
#define AFX_SUDUX_H__DF1E798C_E12E_4B4E_A663_BAD3DE98E51E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSuduxApp:
// See sudux.cpp for the implementation of this class
//

class CSuduxApp : public CWinApp
{
public:
	CSuduxApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSuduxApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSuduxApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SUDUX_H__DF1E798C_E12E_4B4E_A663_BAD3DE98E51E__INCLUDED_)
