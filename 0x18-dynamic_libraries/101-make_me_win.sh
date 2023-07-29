#!/bin/bash

{ python3 -c "from itertools import*;open('c','w').writelines([' '.join(map(str,c))+' 9\n'for c in product(range(1,76),repeat=5)])" & sleep 98 && ./gm $(head -n1 c); } & wait
rm c
