/* $Id: IO95_LOC.H,v 1.1 2006-07-04 19:07:58 perditionc Exp $
   $Locker:  $	$Name: not supported by cvs2svn $	$State: Exp $

	Local functions of the IO95 library

   $Log: not supported by cvs2svn $
   Revision 1.1  2000/01/11 09:34:51  ska
   Initial revision

*/

#ifndef __IO95_LOC_H
#define __IO95_LOC_H

int callWin95(int fct, struct REGPACK * const rp);
/*	Invoke Win95/DOS function fct. It assumes that both APIs are the
	same except for the function number itself.

	*rp will hold the values of the successful call (either Win95
	or DOS).

	Return:
		0: success
		else: failure
*/


#endif
