# ------------------------------------------------------------------------------
# FILE NAME:         Makefile
# DESCRIPTION:
# USAGE:             make
# COMPILER:          GNU g++ compiler on Linux
#
# MODIFICATION HISTORY:
# Author               Date            Version             Description
# ---------------      ----------      ------------        ------------
# Luiz Diego Garcia    02/18/19        0.0.1               Created File
# ------------------------------------------------------------------------------

.cpp :
	g++ -o $* $*.cpp -std=c++11

