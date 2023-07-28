#/bin/bash
# top -bn 1 | grep load | awk '{printf "%.2f%%", $(NF-2)}'
top -bn 1 | awk '/^%Cpu/ {print int($0 +$1 $2 + $4 + $6)" %"}'
# top -bn 1 | awk '/^%Cpu/ {print int($1)" %"}'
