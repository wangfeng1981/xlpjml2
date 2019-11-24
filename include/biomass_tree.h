/**************************************************************************************/
/**                                                                                \n**/
/**                     b  i  o  m  a  s  s  _  t  r  e  e  .  h                   \n**/
/**                                                                                \n**/
/**     C implementation of LPJmL                                                  \n**/
/**                                                                                \n**/
/**     Declaration of biomass stand                                               \n**/
/**                                                                                \n**/
/** (C) Potsdam Institute for Climate Impact Research (PIK), see COPYRIGHT file    \n**/
/** authors, and contributors see AUTHORS file                                     \n**/
/** This file is part of LPJmL and licensed under GNU AGPL Version 3               \n**/
/** or later. See LICENSE file or go to http://www.gnu.org/licenses/               \n**/
/** Contact: https://github.com/PIK-LPJmL/LPJmL                                    \n**/
/**                                                                                \n**/
/**************************************************************************************/

#ifndef BIOMASS_TREE_H
#define BIOMASS_TREE_H

extern Standtype biomass_tree_stand;

extern Bool annual_biomass_tree(Stand *,int, int,Real,int,Bool,Bool,const Config *);
extern Real daily_biomass_tree(Stand *,Real,const Dailyclimate *, int,
                               Real,const Real [],
                               Real ,Real,Real,Real,Real,Real,
                               Real ,int, int, int, Bool,Bool,const Config *);
extern void output_gbw_biomass_tree(Output *,const Stand *,Real,Real,Real,Real,
                                    const Real [LASTLAYER],const Real [LASTLAYER],Real,Real,int,
                                    Bool);

#endif
