#!/usr/bin/env python3

import random

xran = (0,400)
yran = (0,400)
vran = (5,20)
nran = (25,35)

n = random.randint( *nran )

x = random.uniform( *xran )
y = random.uniform( *yran )
r = random.uniform( 20, 40 )
print( f"{x:.1f} {y:.1f} {r:.1f}" )

print(n)
for i in range( n ):
    x = random.uniform( *xran )
    y = random.uniform( *yran )
    v = random.randint( *vran )
    print( f"{x:.1f} {y:.1f} {v}" )