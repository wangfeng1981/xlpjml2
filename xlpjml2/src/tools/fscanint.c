/**************************************************************************************/
/**                                                                                \n**/
/**                   f  s  c  a  n  i  n  t  .  c                                 \n**/
/**                                                                                \n**/
/**     C implementation of LPJmL                                                  \n**/
/**                                                                                \n**/
/**     Function reads an int value from a text file                               \n**/
/**                                                                                \n**/
/** (C) Potsdam Institute for Climate Impact Research (PIK), see COPYRIGHT file    \n**/
/** authors, and contributors see AUTHORS file                                     \n**/
/** This file is part of LPJmL and licensed under GNU AGPL Version 3               \n**/
/** or later. See LICENSE file or go to http://www.gnu.org/licenses/               \n**/
/** Contact: https://github.com/PIK-LPJmL/LPJmL                                    \n**/
/**                                                                                \n**/
/**************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifdef USE_JSON
#include <json-c/json.h>
#endif
#include "types.h"

//Bool fscanint(LPJfile *file,    /**< pointer to LPJ file */
//              int *value,       /**< integer to be read from file */
//              const char *name, /**< variable name */
//              Bool with_default, /**< allow default value */
//              Verbosity verb    /**< verbosity level (NO_ERR,ERR,VERB) */
//             )                  /** \return TRUE on error */

Bool fscanint(LPJfile *file,    /**< pointer to LPJ file */
				int *value,       /**< integer to be read from file */
				const char *name, /**< variable name */
				Bool with_default 
	, Verbosity verb
				)                  /** \return TRUE on error */
{
 
  String line,token;
  char *ptr;
  Bool rc;

 
  rc=fscantoken(file->file.file,token);
  if(!rc)
  {
    *value=(int)strtol(token,&ptr,10);
    rc=*ptr!='\0';
  }
  if(rc && verb)
  {
    fprintf(stderr,"ERROR101: Cannot read int '%s' in line %d of '%s', ",
            name,getlinecount(),getfilename());
    if(strlen(token)>0)
    {
      fputs("read:\n",stderr);
      if(fgets(line,STRING_LEN,file->file.file)!=NULL)
        line[strlen(line)-1]='\0';
      else
        line[0]='\0';
      fprintf(stderr,"          '%s%s'\n           ",token,line);
      frepeatch(stderr,'^',strlen(token));
      fputc('\n',stderr);
    }
    else
      fputs("EOF reached.\n",stderr);
  }
  else if (verb >= VERB)
    printf("\"%s\" : %d\n", name, *value);
  return rc;
} /* of 'fscanint' */
