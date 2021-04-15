#!bin/sh

cat /etc/passwd | awk -F ":" '{print $1}' |  awk '0==NR%2' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2} p" | paste -s -d ',' | sed 's/,/, /g' | tr "\n" "."