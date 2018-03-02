#!/bin/python

if __name__=='__main__':
    a, b, c = map(int, input().split())
    sum=int(a)+int(b)+int(c)

    print("%d\n%f\n%d" % (sum,sum/3.0,int(sum/3.0+0.5)))
    
