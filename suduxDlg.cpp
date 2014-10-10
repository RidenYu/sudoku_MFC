// suduxDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sudux.h"
#include "suduxDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSuduxDlg dialog

CSuduxDlg::CSuduxDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSuduxDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSuduxDlg)
	m_num0 = 0;
	m_num1 = 0;
	m_num2 = 0;
	m_num3 = 0;
	m_num4 = 0;
	m_num5 = 0;
	m_num6 = 0;
	m_num7 = 0;
	m_num8 = 0;
	m_num9 = 0;
	m_num10 = 0;
	m_num11 = 0;
	m_num12 = 0;
	m_num13 = 0;
	m_num14 = 0;
	m_num15 = 0;
	m_num16 = 0;
	m_num17 = 0;
	m_num18 = 0;
	m_num19 = 0;
	m_num20 = 0;
	m_num21 = 0;
	m_num22 = 0;
	m_num23 = 0;
	m_num24 = 0;
	m_num25 = 0;
	m_num26 = 0;
	m_num27 = 0;
	m_num28 = 0;
	m_num29 = 0;
	m_num30 = 0;
	m_num31 = 0;
	m_num32 = 0;
	m_num33 = 0;
	m_num34 = 0;
	m_num35 = 0;
	m_num36 = 0;
	m_num37 = 0;
	m_num38 = 0;
	m_num39 = 0;
	m_num40 = 0;
	m_num41 = 0;
	m_num42 = 0;
	m_num43 = 0;
	m_num44 = 0;
	m_num45 = 0;
	m_num46 = 0;
	m_num47 = 0;
	m_num48 = 0;
	m_num49 = 0;
	m_num50 = 0;
	m_num51 = 0;
	m_num52 = 0;
	m_num53 = 0;
	m_num54 = 0;
	m_num55 = 0;
	m_num56 = 0;
	m_num57 = 0;
	m_num58 = 0;
	m_num59 = 0;
	m_num60 = 0;
	m_num61 = 0;
	m_num62 = 0;
	m_num63 = 0;
	m_num64 = 0;
	m_num65 = 0;
	m_num66 = 0;
	m_num67 = 0;
	m_num68 = 0;
	m_num69 = 0;
	m_num70 = 0;
	m_num71 = 0;
	m_num72 = 0;
	m_num73 = 0;
	m_num74 = 0;
	m_num75 = 0;
	m_num76 = 0;
	m_num77 = 0;
	m_num78 = 0;
	m_num79 = 0;
	m_num80 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSuduxDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSuduxDlg)
	DDX_Text(pDX, IDC_EDIT2, m_num0);
	DDV_MinMaxInt(pDX, m_num0, 0, 9);
	DDX_Text(pDX, IDC_EDIT3, m_num1);
	DDV_MinMaxInt(pDX, m_num1, 0, 9);
	DDX_Text(pDX, IDC_EDIT4, m_num2);
	DDV_MinMaxInt(pDX, m_num2, 0, 9);
	DDX_Text(pDX, IDC_EDIT5, m_num3);
	DDV_MinMaxInt(pDX, m_num3, 0, 9);
	DDX_Text(pDX, IDC_EDIT6, m_num4);
	DDV_MinMaxInt(pDX, m_num4, 0, 9);
	DDX_Text(pDX, IDC_EDIT7, m_num5);
	DDV_MinMaxInt(pDX, m_num5, 0, 9);
	DDX_Text(pDX, IDC_EDIT8, m_num6);
	DDV_MinMaxInt(pDX, m_num6, 0, 9);
	DDX_Text(pDX, IDC_EDIT9, m_num7);
	DDV_MinMaxInt(pDX, m_num7, 0, 9);
	DDX_Text(pDX, IDC_EDIT10, m_num8);
	DDV_MinMaxInt(pDX, m_num8, 0, 9);
	DDX_Text(pDX, IDC_EDIT11, m_num9);
	DDV_MinMaxInt(pDX, m_num9, 0, 9);
	DDX_Text(pDX, IDC_EDIT12, m_num10);
	DDV_MinMaxInt(pDX, m_num10, 0, 9);
	DDX_Text(pDX, IDC_EDIT13, m_num11);
	DDV_MinMaxInt(pDX, m_num11, 0, 9);
	DDX_Text(pDX, IDC_EDIT14, m_num12);
	DDV_MinMaxInt(pDX, m_num12, 0, 9);
	DDX_Text(pDX, IDC_EDIT15, m_num13);
	DDV_MinMaxInt(pDX, m_num13, 0, 9);
	DDX_Text(pDX, IDC_EDIT16, m_num14);
	DDV_MinMaxInt(pDX, m_num14, 0, 9);
	DDX_Text(pDX, IDC_EDIT17, m_num15);
	DDV_MinMaxInt(pDX, m_num15, 0, 9);
	DDX_Text(pDX, IDC_EDIT18, m_num16);
	DDV_MinMaxInt(pDX, m_num16, 0, 9);
	DDX_Text(pDX, IDC_EDIT19, m_num17);
	DDV_MinMaxInt(pDX, m_num17, 0, 9);
	DDX_Text(pDX, IDC_EDIT20, m_num18);
	DDV_MinMaxInt(pDX, m_num18, 0, 9);
	DDX_Text(pDX, IDC_EDIT21, m_num19);
	DDV_MinMaxInt(pDX, m_num19, 0, 9);
	DDX_Text(pDX, IDC_EDIT22, m_num20);
	DDV_MinMaxInt(pDX, m_num20, 0, 9);
	DDX_Text(pDX, IDC_EDIT23, m_num21);
	DDV_MinMaxInt(pDX, m_num21, 0, 9);
	DDX_Text(pDX, IDC_EDIT24, m_num22);
	DDV_MinMaxInt(pDX, m_num22, 0, 9);
	DDX_Text(pDX, IDC_EDIT25, m_num23);
	DDV_MinMaxInt(pDX, m_num23, 0, 9);
	DDX_Text(pDX, IDC_EDIT26, m_num24);
	DDV_MinMaxInt(pDX, m_num24, 0, 9);
	DDX_Text(pDX, IDC_EDIT27, m_num25);
	DDV_MinMaxInt(pDX, m_num25, 0, 9);
	DDX_Text(pDX, IDC_EDIT28, m_num26);
	DDV_MinMaxInt(pDX, m_num26, 0, 9);
	DDX_Text(pDX, IDC_EDIT29, m_num27);
	DDV_MinMaxInt(pDX, m_num27, 0, 9);
	DDX_Text(pDX, IDC_EDIT30, m_num28);
	DDV_MinMaxInt(pDX, m_num28, 0, 9);
	DDX_Text(pDX, IDC_EDIT31, m_num29);
	DDV_MinMaxInt(pDX, m_num29, 0, 9);
	DDX_Text(pDX, IDC_EDIT32, m_num30);
	DDV_MinMaxInt(pDX, m_num30, 0, 9);
	DDX_Text(pDX, IDC_EDIT33, m_num31);
	DDV_MinMaxInt(pDX, m_num31, 0, 9);
	DDX_Text(pDX, IDC_EDIT34, m_num32);
	DDV_MinMaxInt(pDX, m_num32, 0, 9);
	DDX_Text(pDX, IDC_EDIT35, m_num33);
	DDV_MinMaxInt(pDX, m_num33, 0, 9);
	DDX_Text(pDX, IDC_EDIT36, m_num34);
	DDV_MinMaxInt(pDX, m_num34, 0, 9);
	DDX_Text(pDX, IDC_EDIT37, m_num35);
	DDV_MinMaxInt(pDX, m_num35, 0, 9);
	DDX_Text(pDX, IDC_EDIT38, m_num36);
	DDV_MinMaxInt(pDX, m_num36, 0, 9);
	DDX_Text(pDX, IDC_EDIT39, m_num37);
	DDV_MinMaxInt(pDX, m_num37, 0, 9);
	DDX_Text(pDX, IDC_EDIT40, m_num38);
	DDV_MinMaxInt(pDX, m_num38, 0, 9);
	DDX_Text(pDX, IDC_EDIT41, m_num39);
	DDV_MinMaxInt(pDX, m_num39, 0, 9);
	DDX_Text(pDX, IDC_EDIT42, m_num40);
	DDV_MinMaxInt(pDX, m_num40, 0, 9);
	DDX_Text(pDX, IDC_EDIT43, m_num41);
	DDV_MinMaxInt(pDX, m_num41, 0, 9);
	DDX_Text(pDX, IDC_EDIT44, m_num42);
	DDV_MinMaxInt(pDX, m_num42, 0, 9);
	DDX_Text(pDX, IDC_EDIT45, m_num43);
	DDV_MinMaxInt(pDX, m_num43, 0, 9);
	DDX_Text(pDX, IDC_EDIT46, m_num44);
	DDV_MinMaxInt(pDX, m_num44, 0, 9);
	DDX_Text(pDX, IDC_EDIT47, m_num45);
	DDV_MinMaxInt(pDX, m_num45, 0, 9);
	DDX_Text(pDX, IDC_EDIT48, m_num46);
	DDV_MinMaxInt(pDX, m_num46, 0, 9);
	DDX_Text(pDX, IDC_EDIT49, m_num47);
	DDV_MinMaxInt(pDX, m_num47, 0, 9);
	DDX_Text(pDX, IDC_EDIT50, m_num48);
	DDV_MinMaxInt(pDX, m_num48, 0, 9);
	DDX_Text(pDX, IDC_EDIT51, m_num49);
	DDV_MinMaxInt(pDX, m_num49, 0, 9);
	DDX_Text(pDX, IDC_EDIT52, m_num50);
	DDV_MinMaxInt(pDX, m_num50, 0, 9);
	DDX_Text(pDX, IDC_EDIT53, m_num51);
	DDV_MinMaxInt(pDX, m_num51, 0, 9);
	DDX_Text(pDX, IDC_EDIT54, m_num52);
	DDV_MinMaxInt(pDX, m_num52, 0, 9);
	DDX_Text(pDX, IDC_EDIT55, m_num53);
	DDV_MinMaxInt(pDX, m_num53, 0, 9);
	DDX_Text(pDX, IDC_EDIT56, m_num54);
	DDV_MinMaxInt(pDX, m_num54, 0, 9);
	DDX_Text(pDX, IDC_EDIT57, m_num55);
	DDV_MinMaxInt(pDX, m_num55, 0, 9);
	DDX_Text(pDX, IDC_EDIT58, m_num56);
	DDV_MinMaxInt(pDX, m_num56, 0, 9);
	DDX_Text(pDX, IDC_EDIT59, m_num57);
	DDV_MinMaxInt(pDX, m_num57, 0, 9);
	DDX_Text(pDX, IDC_EDIT60, m_num58);
	DDV_MinMaxInt(pDX, m_num58, 0, 9);
	DDX_Text(pDX, IDC_EDIT61, m_num59);
	DDV_MinMaxInt(pDX, m_num59, 0, 9);
	DDX_Text(pDX, IDC_EDIT62, m_num60);
	DDV_MinMaxInt(pDX, m_num60, 0, 9);
	DDX_Text(pDX, IDC_EDIT63, m_num61);
	DDV_MinMaxInt(pDX, m_num61, 0, 9);
	DDX_Text(pDX, IDC_EDIT64, m_num62);
	DDV_MinMaxInt(pDX, m_num62, 0, 9);
	DDX_Text(pDX, IDC_EDIT65, m_num63);
	DDV_MinMaxInt(pDX, m_num63, 0, 9);
	DDX_Text(pDX, IDC_EDIT66, m_num64);
	DDV_MinMaxInt(pDX, m_num64, 0, 9);
	DDX_Text(pDX, IDC_EDIT67, m_num65);
	DDV_MinMaxInt(pDX, m_num65, 0, 9);
	DDX_Text(pDX, IDC_EDIT68, m_num66);
	DDV_MinMaxInt(pDX, m_num66, 0, 9);
	DDX_Text(pDX, IDC_EDIT69, m_num67);
	DDV_MinMaxInt(pDX, m_num67, 0, 9);
	DDX_Text(pDX, IDC_EDIT70, m_num68);
	DDV_MinMaxInt(pDX, m_num68, 0, 9);
	DDX_Text(pDX, IDC_EDIT71, m_num69);
	DDV_MinMaxInt(pDX, m_num69, 0, 9);
	DDX_Text(pDX, IDC_EDIT72, m_num70);
	DDV_MinMaxInt(pDX, m_num70, 0, 9);
	DDX_Text(pDX, IDC_EDIT73, m_num71);
	DDV_MinMaxInt(pDX, m_num71, 0, 9);
	DDX_Text(pDX, IDC_EDIT74, m_num72);
	DDV_MinMaxInt(pDX, m_num72, 0, 9);
	DDX_Text(pDX, IDC_EDIT75, m_num73);
	DDV_MinMaxInt(pDX, m_num73, 0, 9);
	DDX_Text(pDX, IDC_EDIT76, m_num74);
	DDV_MinMaxInt(pDX, m_num74, 0, 9);
	DDX_Text(pDX, IDC_EDIT77, m_num75);
	DDV_MinMaxInt(pDX, m_num75, 0, 9);
	DDX_Text(pDX, IDC_EDIT78, m_num76);
	DDV_MinMaxInt(pDX, m_num76, 0, 9);
	DDX_Text(pDX, IDC_EDIT79, m_num77);
	DDV_MinMaxInt(pDX, m_num77, 0, 9);
	DDX_Text(pDX, IDC_EDIT80, m_num78);
	DDV_MinMaxInt(pDX, m_num78, 0, 9);
	DDX_Text(pDX, IDC_EDIT81, m_num79);
	DDV_MinMaxInt(pDX, m_num79, 0, 9);
	DDX_Text(pDX, IDC_EDIT82, m_num80);
	DDV_MinMaxInt(pDX, m_num80, 0, 9);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSuduxDlg, CDialog)
	//{{AFX_MSG_MAP(CSuduxDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSuduxDlg message handlers

BOOL CSuduxDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSuduxDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSuduxDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSuduxDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSuduxDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	int count=0;
	int kong[81]={0};
	int tt=0;


	struct Point
	{
		int id;
		int num;
		int hang;
		int lie;
		int flag;
	};
	Point data[81];


	UpdateData();

	int shuju[81]={m_num0,m_num1,m_num2,m_num3,m_num4,m_num5,m_num6,m_num7,m_num8,m_num9,
		m_num10,m_num11,m_num12,m_num13,m_num14,m_num15,m_num16,m_num17,m_num18,m_num19,
		m_num20,m_num21,m_num22,m_num23,m_num24,m_num25,m_num26,m_num27,m_num28,m_num29,
		m_num30,m_num31,m_num32,m_num33,m_num34,m_num35,m_num36,m_num37,m_num38,m_num39,
		m_num40,m_num41,m_num42,m_num43,m_num44,m_num45,m_num46,m_num47,m_num48,m_num49,
		m_num50,m_num51,m_num52,m_num53,m_num54,m_num55,m_num56,m_num57,m_num58,m_num59,
		m_num60,m_num61,m_num62,m_num63,m_num64,m_num65,m_num66,m_num67,m_num68,m_num69,
		m_num70,m_num71,m_num72,m_num73,m_num74,m_num75,m_num76,m_num77,m_num78,m_num79,
		m_num80};

    int sudoku[9][9];
	int aa=0;
	for(int a=0;a<9;a++)
		for(int b=0;b<9;b++)
		{
			sudoku[a][b]=shuju[aa];
			aa++;
		}

	int pp=0;
	for(int c=0;c<9;c++)
		for(int d=0;d<9;d++)
		{
			data[pp].num=sudoku[c][d];
			data[pp].hang=c;
			data[pp].lie=d;
			pp++;
		}




	data[0].id=data[1].id=data[2].id=data[9].id=data[10].id=data[11].id=data[18].id=data[19].id=data[20].id=0;
	data[3].id=data[4].id=data[5].id=data[12].id=data[13].id=data[14].id=data[21].id=data[22].id=data[23].id=1;
	data[6].id=data[7].id=data[8].id=data[15].id=data[16].id=data[17].id=data[24].id=data[25].id=data[26].id=2;


	data[27].id=data[28].id=data[29].id=data[36].id=data[37].id=data[38].id=data[45].id=data[46].id=data[47].id=3;
	data[30].id=data[31].id=data[32].id=data[39].id=data[40].id=data[41].id=data[48].id=data[49].id=data[50].id=4;
	data[33].id=data[34].id=data[35].id=data[42].id=data[43].id=data[44].id=data[51].id=data[52].id=data[53].id=5;


	data[54].id=data[55].id=data[56].id=data[63].id=data[64].id=data[65].id=data[72].id=data[73].id=data[74].id=6;
	data[57].id=data[58].id=data[59].id=data[66].id=data[67].id=data[68].id=data[75].id=data[76].id=data[77].id=7;
	data[60].id=data[61].id=data[62].id=data[69].id=data[70].id=data[71].id=data[78].id=data[79].id=data[80].id=8;


	for(int e=0;e<81;e++)
	{
		if(data[e].num)  {data[e].flag=1;}
		else{data[e].flag=0;}
	}

    int mm,nn;
	for( mm=0;mm<81;mm++)
	{
		
			for(nn=0;nn<81;nn++)
			{
				if((data[nn].flag==1)&&(mm!=nn)&&(data[mm].flag==1))
				{
					if((data[mm].num==data[nn].num)&&((data[mm].hang==data[nn].hang)||(data[mm].lie==data[nn].lie)||(data[mm].id==data[nn].id)))
					{
						MessageBox(" Data ERROR!!!     Please check your input!",NULL,MB_OK);
						break;
					}
				}
			}
		
		if(nn<80)
		{
			break;
		}
	}



	if(mm==81)
	{

	for(int f=0;f<81;f++)
	{
		if(data[f].flag==0)
		{
			kong[tt]=f;
			tt++;
		}
	}

	//回溯法解数独

	int z=-1;
	for(int x=0;x<81;x++)
	{
		if(data[x].flag==0)
		{
			z++;
			data[x].num++;
			for(int y=0;y<81;y++)
			{
			
				if(x!=y)
				{
					if((data[x].lie==data[y].lie)||(data[x].hang==data[y].hang)||(data[x].id==data[y].id))
					{
						if(data[x].num==data[y].num){data[x].num++;y=-1;}
						if(data[x].num>9)
						{
							data[x].num=0;
				        	x=kong[z-1]-1;
				        	z=z-2;
				        	break;
						}
					}
				}
				
			}
			if(z<-1){MessageBox("No answer,Please Check!",NULL,MB_OK);break;}
		}
	}


	m_num0=data[0].num;m_num1=data[1].num;m_num2=data[2].num;m_num3=data[3].num;m_num4=data[4].num;m_num5=data[5].num;m_num6=data[6].num;
	m_num7=data[7].num;m_num8=data[8].num;m_num9=data[9].num;m_num10=data[10].num;m_num11=data[11].num;m_num12=data[12].num;m_num13=data[13].num;
	m_num14=data[14].num;m_num15=data[15].num;m_num16=data[16].num;m_num17=data[17].num;m_num18=data[18].num;m_num19=data[19].num;
    m_num20=data[20].num;m_num21=data[21].num;m_num22=data[22].num;m_num23=data[23].num;m_num24=data[24].num;m_num25=data[25].num;m_num26=data[26].num;
	m_num27=data[27].num;m_num28=data[28].num;m_num29=data[29].num;m_num30=data[30].num;m_num31=data[31].num;m_num32=data[32].num;m_num33=data[33].num;
	m_num34=data[34].num;m_num35=data[35].num;m_num36=data[36].num;m_num37=data[37].num;m_num38=data[38].num;m_num39=data[39].num;m_num40=data[40].num;
	m_num41=data[41].num;m_num42=data[42].num;m_num43=data[43].num;m_num44=data[44].num;m_num45=data[45].num;m_num46=data[46].num;m_num47=data[47].num;
	m_num48=data[48].num;m_num49=data[49].num;m_num50=data[50].num;m_num51=data[51].num;m_num52=data[52].num;m_num53=data[53].num;m_num54=data[54].num;
	m_num55=data[55].num;m_num56=data[56].num;m_num57=data[57].num;m_num58=data[58].num;m_num59=data[59].num;m_num60=data[60].num;m_num61=data[61].num;
	m_num62=data[62].num;m_num63=data[63].num;m_num64=data[64].num;m_num65=data[65].num;m_num66=data[66].num;m_num67=data[67].num;m_num68=data[68].num;
	m_num69=data[69].num;m_num70=data[70].num;m_num71=data[71].num;m_num72=data[72].num;m_num73=data[73].num;m_num74=data[74].num;m_num75=data[75].num;
	m_num76=data[76].num;m_num77=data[77].num;m_num78=data[78].num;m_num79=data[79].num;m_num80=data[80].num;


	UpdateData(FALSE);
	}
	
}

void CSuduxDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here

	m_num0=m_num1=m_num2=m_num3=m_num4=m_num5=m_num6=m_num7=m_num8=m_num9=
		m_num10=m_num11=m_num12=m_num13=m_num14=m_num15=m_num16=m_num17=m_num18=m_num19=
		m_num20=m_num21=m_num22=m_num23=m_num24=m_num25=m_num26=m_num27=m_num28=m_num29=
		m_num30=m_num31=m_num32=m_num33=m_num34=m_num35=m_num36=m_num37=m_num38=m_num39=
		m_num40=m_num41=m_num42=m_num43=m_num44=m_num45=m_num46=m_num47=m_num48=m_num49=
		m_num50=m_num51=m_num52=m_num53=m_num54=m_num55=m_num56=m_num57=m_num58=m_num59=
		m_num60=m_num61=m_num62=m_num63=m_num64=m_num65=m_num66=m_num67=m_num68=m_num69=
		m_num70=m_num71=m_num72=m_num73=m_num74=m_num75=m_num76=m_num77=m_num78=m_num79=
		m_num80=0;
	UpdateData(FALSE);

	
}

void CSuduxDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	if(MessageBox("EXIT?","退出",MB_YESNO)==IDYES)
	{
		PostQuitMessage(0);
	}

	
}
