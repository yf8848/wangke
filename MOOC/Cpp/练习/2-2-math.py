#!/bin/python

import math


if __name__=='__main__':
    c=input()
    c=float(c)
    print(math.sin(c*c)/(1-math.cos(c)))
