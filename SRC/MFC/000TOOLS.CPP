/*
	 Battle of Britain
	 Copyright (C) 2000, 2001 Empire Interactive (Europe) Ltd,
	 677 High Road, North Finchley, London N12 0DA

	 Please see the document licence.doc for the full licence agreement

2. LICENCE
 2.1 	
 	Subject to the provisions of this Agreement we now grant to you the 
 	following rights in respect of the Source Code:
  2.1.1 
  	the non-exclusive right to Exploit  the Source Code and Executable 
  	Code on any medium; and 
  2.1.2 
  	the non-exclusive right to create and distribute Derivative Works.
 2.2 	
 	Subject to the provisions of this Agreement we now grant you the
	following rights in respect of the Object Code:
  2.2.1 
	the non-exclusive right to Exploit the Object Code on the same
	terms and conditions set out in clause 3, provided that any
	distribution is done so on the terms of this Agreement and is
	accompanied by the Source Code and Executable Code (as
	applicable).

3. GENERAL OBLIGATIONS
 3.1 
 	In consideration of the licence granted in clause 2.1 you now agree:
  3.1.1 
	that when you distribute the Source Code or Executable Code or
	any Derivative Works to Recipients you will also include the
	terms of this Agreement;
  3.1.2 
	that when you make the Source Code, Executable Code or any
	Derivative Works ("Materials") available to download, you will
	ensure that Recipients must accept the terms of this Agreement
	before being allowed to download such Materials;
  3.1.3 
	that by Exploiting the Source Code or Executable Code you may
	not impose any further restrictions on a Recipient's subsequent
	Exploitation of the Source Code or Executable Code other than
	those contained in the terms and conditions of this Agreement;
  3.1.4 
	not (and not to allow any third party) to profit or make any
	charge for the Source Code, or Executable Code, any
	Exploitation of the Source Code or Executable Code, or for any
	Derivative Works;
  3.1.5 
	not to place any restrictions on the operability of the Source 
	Code;
  3.1.6 
	to attach prominent notices to any Derivative Works stating
	that you have changed the Source Code or Executable Code and to
	include the details anddate of such change; and
  3.1.7 
  	not to Exploit the Source Code or Executable Code otherwise than
	as expressly permitted by  this Agreement.

questions about this file may be asked at bob@rowansoftware.com a
better place to ask is http://www.simhq.com/ or even :-
http://www.simhq.com/cgi-bin/boards/cgi-bin/forumdisplay.cgi?action=topics&forum=Battle+of+Britain&number=40&DaysPrune=20&LastLogin=
*/

//This dummy module is dependent on 000tools.dep
//000tools.dep is dependent on .dep files generated by various tools such as:
//	FMAKE2
//	MAKEBF
//currently not using precompiled headers!
//#include    "stdafx.h"
//#define FULL_MEMORY_CHECKING
#include	"000tools.h"
#ifndef USER
#define USER NONE
#endif
#define _XSTR(x)         #x
#define TOSTR(x)        _XSTR(x)
#ifdef _DEBUG														  //JIM 13/05/99
	char* compiledate=__DATE__ " " __TIME__ " Debug! (" TOSTR(USER) ")";
#else
	char* compiledate=__DATE__ " " __TIME__ " (" TOSTR(USER) ")";
#endif

#define AFX_CDECL __cdecl
typedef char CHAR;
#define CONST               const
typedef CONST CHAR *LPCSTR, *PCSTR;
typedef LPCSTR LPCTSTR;
#define __T(x)      x
#define _T(x)       __T(x)
void AFX_CDECL AfxTrace(LPCTSTR lpszFormat, ...);
#ifdef _DEBUG
#define TRACE0(sz)              ::AfxTrace(_T("%s"), _T(sz))

#include "dosdefs.h"
#undef	new   
#include <crtdbg.h>
#define new DEBUG_NEW




struct silly
{
	silly() 
	{
//TempCode JIM 18Aug00 		_CrtSetAllocHook (YourAllocHook);

		TRACE0("Constructing static objects...\n");
	}
	~silly(){TRACE0("Finished destructing static objects...\n");}
} SillySillySilly;
#endif

