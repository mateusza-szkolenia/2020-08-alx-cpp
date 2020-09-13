#!/usr/bin/env python3

import random

sran = (13,15)
nran = (125,135)
xran = (0,400)
yran = (0,400)
pran = (5,20)

n = random.randint( *nran )
s = random.randint( *sran )

print(s)
for i in range( s ):
    x = random.uniform( *xran )
    y = random.uniform( *yran )
    print( f"{x:.1f} {y:.1f}" )

print(n)
for i in range( n ):
    x = random.uniform( *xran )
    y = random.uniform( *yran )
    p = random.randint( *pran )
    print( f"{x:.1f} {y:.1f} {p}" )

