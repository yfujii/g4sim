#!/bin/sh

#for detector construction
export MATERIALLISTROOT=material_list
#export GEOCARDROOT=geometry_A9_2p4
#export GEOCARDROOT=geometry_A9_1p5
#export GEOCARDROOT=geometry_A9_1p5_4v
#export GEOCARDROOT=geometry_A9_1p5_0731
export GEOCARDROOT=geometry_A9_1p5_0731_4v
#for magField
export MAGFIELDCARDROOT=MagField_A9_130927
#export MAGFIELDCARDROOT=MagField_A9_130731
#for generator
export GENFILEROOT=gen_pmc
#for output
export OFILENAMEROOT=$MYG4SIMROOT/output/raw_g4sim.root
export RUNNAMEROOT=TEST
export OUTCARDROOT=output_pmc