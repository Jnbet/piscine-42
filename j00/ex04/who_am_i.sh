ldapwhoami -Q | grep -w "dn" | sed 's/dn://g'
