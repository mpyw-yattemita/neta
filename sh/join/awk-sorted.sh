#!/bin/sh

awk '
    FNR==NR{m[$1]=$0; next}
    $1 in m{print $2 FS $3 FS $4 FS m[$1]}
' t2.txt t1.txt | sort -k 1 | sort -nk 2
