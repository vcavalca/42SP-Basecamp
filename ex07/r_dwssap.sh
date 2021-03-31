#!bin/sh

cat /etc/passwd | grep \# -v | sed -n g\;n\;p | cut -d ':' -f 1 | rev | sort -r | tr '\n' ',' | sed 's/,/, /g;s/, $/./' | tr -d '\n'
