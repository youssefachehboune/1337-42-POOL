cat /etc/passwd | grep  -v '^#'| awk 'NR%2==0' | cut -d ':' -f1 | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed 's/$/,/g' | tr '\n' ' ' | sed 's/, $/./' | tr -d '\n'
