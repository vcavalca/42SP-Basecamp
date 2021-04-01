#!bin/sh
FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | awk -F ":" '{print $1}' |  awk '0==NR%2' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2} p" | paste -s -d "," | tr "\n" "."