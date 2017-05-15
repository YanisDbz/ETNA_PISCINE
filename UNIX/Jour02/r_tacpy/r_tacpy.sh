#!/bin/bash

grep "/bin/shells/etna" passwd | cut -d: -f1 | sed '1d; n; d' | rev | sort -rd | sed -n "$MY_LINE1,$MY_LINE2 p" | tr "\n" "," | sed -re 's/,$/./g'| sed -re 's/$/\n/g'
 
