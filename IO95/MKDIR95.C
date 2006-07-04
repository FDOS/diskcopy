/* $RCSfile: MKDIR95.C,v $
   $Locker:  $	$Name: not supported by cvs2svn $	$State: Exp $

	int mkdir95(char *dnam);
	int rmdir95(char *dnam);
	int chdir95(char *dnam);

	Make/Remove/Change directory supporting Win95 LFN.

	Return:
		0: success
		else: failure

   $Log: not supported by cvs2svn $
   Revision 1.2  2000/01/11 09:34:36  ska
   add: support Turbo C v2.01

   Revision 1.1  2000/01/11 09:10:09  ska
   Auto Check-in

*/

#include <assert.h>
#include <dos.h>
#include "io95.h"
#include "io95_loc.h"

#ifndef lint
static char const rcsid[] = 
	"$Id: MKDIR95.C,v 1.1 2006-07-04 19:07:58 perditionc Exp $";
#endif

static int callAPI(int fct, const char * const dnam)
{	struct REGPACK r;

	assert(dnam);
	r.r_ds = FP_SEG(dnam);
	r.r_dx = FP_OFF(dnam);
	return callWin95(fct, &r);
}

int mkdir95(const char * const dnam)
{	
	return callAPI(0x39, dnam);
}

int rmdir95(const char * const dnam)
{	
	return callAPI(0x3a, dnam);
}

int chdir95(const char * const dnam)
{	
	return callAPI(0x3b, dnam);
}
