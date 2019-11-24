/**************************************************************************************/
/**                                                                                \n**/
/**                    n  o  w  d  f  .  c                                         \n**/
/**                                                                                \n**/
/**     Default function for calculation of water deficit fraction                 \n**/
/**                                                                                \n**/
/**     C implementation of LPJmL                                                  \n**/
/**                                                                                \n**/
/** (C) Potsdam Institute for Climate Impact Research (PIK), see COPYRIGHT file    \n**/
/** authors, and contributors see AUTHORS file                                     \n**/
/** This file is part of LPJmL and licensed under GNU AGPL Version 3               \n**/
/** or later. See LICENSE file or go to http://www.gnu.org/licenses/               \n**/
/** Contact: https://github.com/PIK-LPJmL/LPJmL                                    \n**/
/**                                                                                \n**/
/**************************************************************************************/

#include "lpj.h"

Real nowdf(Pft * UNUSED(pft),Real UNUSED(demand),Real UNUSED(supply))
{
  return NO_WDF;
} /* of 'nowdf' */
