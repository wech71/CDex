/*
** CDex - Open Source Digital Audio CD Extractor
**
** Copyright (C) 2006 - 2007 Georgy Berdyshev
** Copyright (C) 1999 Albert L. Faber
**
** http://cdexos.sourceforge.net/
** http://sourceforge.net/projects/cdexos 
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#if !defined(AFX_FILEFORMATINFODLG_H__C49B0FC0_CA95_11D2_A2D2_444553540001__INCLUDED_)
#define AFX_FILEFORMATINFODLG_H__C49B0FC0_CA95_11D2_A2D2_444553540001__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// FileFormatInfoDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFileFormatInfoDlg dialog

class CFileFormatInfoDlg : public CDialog
{
// Construction
public:
	CFileFormatInfoDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFileFormatInfoDlg)
	enum { IDD = IDD_FILENAMEINFO };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFileFormatInfoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFileFormatInfoDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FILEFORMATINFODLG_H__C49B0FC0_CA95_11D2_A2D2_444553540001__INCLUDED_)
