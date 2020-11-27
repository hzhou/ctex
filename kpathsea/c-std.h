/* c-std.h: the first header files.

   Copyright 1992, 1993, 1994, 1995, 1996, 1997, 2008, 2012 Karl Berry.
   Copyright 1999, 2005 Olaf Weber.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this library; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef KPATHSEA_C_STD_H
#define KPATHSEA_C_STD_H

/* Header files that essentially all of our sources need, and
   that all implementations have.  We include these first, to help with
   NULL being defined multiple times.  */

#ifndef __cplusplus
#include <math.h>
/* apparently M_PI isn't defined by <math.h> under older VC */
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#endif

#include <stdio.h>
#include <stdarg.h>

/* Be sure we have constants from <unistd.h>.  */
#include <unistd.h>

#include <stdlib.h>
#include <string.h>
#include <limits.h>

#ifndef EXIT_SUCCESS
#ifdef VMS
#define EXIT_SUCCESS 1
#define EXIT_FAILURE 0
#else
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#endif
#endif /* not EXIT_SUCCESS */

#include <errno.h>
#include <assert.h>

#ifdef VMS
#include <unixlib.h>
#include <unixio.h>
#endif /* not VMS */

#endif /* not KPATHSEA_C_STD_H */
