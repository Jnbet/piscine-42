ldapsearch -Q "(uid=z*)" | grep -i "^cn" | sort -rf | sed 's/cn: //g'
