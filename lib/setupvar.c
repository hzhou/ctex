/* setupvar.c: Look up a value in texmf.cnf or use default.

   Adapted in 2010 by Peter Breitenlohner.  Public domain.
   Written in 1995 by Karl Berry.  Public domain.  */

#include "../myw2c.h"
#include "lib.h"

/* Look up VAR_NAME in texmf.cnf; assign either the value found there or
   DFLT to *VAR.  */

void
setupboundvariable (int *var, const char * var_name, int dflt)
{
  char * expansion = kpse_var_value (var_name);
  *var = dflt;

  if (expansion) {
    int conf_val = atoi (expansion);
    /* It's ok if the cnf file specifies 0 for extra_mem_{top,bot}, etc.
       But negative numbers are always wrong.  */
    if (conf_val < 0 || (conf_val == 0 && dflt > 0)) {
      fprintf (stderr,
               "%s: Bad value (%ld) in environment or texmf.cnf for %s, keeping %ld.\n",
               "mykpse",
               (long) conf_val, var_name, (long) dflt);
    } else {
      *var = conf_val; /* We'll make further checks later.  */
    }
    free (expansion);
  }
}
