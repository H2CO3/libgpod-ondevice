#!/bin/bash

# sources=`ls *.m`
#
# for file in $sources; do
#	echo `basename $file ".m"`.o;
# done

sources=`ls *.c`

for file in $sources; do
  	echo `basename $file ".c"`.o;
done

