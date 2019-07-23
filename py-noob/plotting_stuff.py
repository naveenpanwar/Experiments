import matplotlib.pyplot as mtpl 
from timeit import Timer
from numpy import *

def plot(x, y, x_label, y_label, output_file):
    "plot results"
    mtpl.figure( figsize=(6,6) )
    mtpl.xlabel(x_label)
    mtpl.ylabel(y_label)
    mtpl.plot(x, y)
    mtpl.savefig(output_file)

def naive(a,b):
    x = a;
    y = b;
    z = 0;
    while x > 0:
        z = z + y;
        x = x - 1;
    return z

def russian(a,b):
    x = a
    y = b
    z = 0
    while x > 0:
        if x % 2 == 1:
            z = z + y
        x = x >> 1
        y = y << 1

    return z


maxsize = 24
ns = [ 1 << i for i in range(maxsize) ]

times1 = [ Timer( "naive( %d, %d)"%(n,n), 'from __main__ import naive' ).timeit(number=1) for n in ns ]
times2 = [ Timer( "russian( %d, %d)"%(n,n), 'from __main__ import russian' ).timeit(number=1) for n in ns ]

mtpl.figure().set_size_inches(20,20)
mtpl.xticks(ns)
mtpl.plot(ns, times1, ns, times2)
mtpl.savefig('some.png')
#plot(ns, times1, 'Input', 'Time (sec)', 'unit1-10.png')
