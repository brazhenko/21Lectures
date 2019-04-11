import math
import sys

def Evkl(n, m):
    print("Рассмотрим пошагово алгоритм Евклида:")
    while n != 0 and m != 0:
        print("n:{},  m:{}".format(n, m))
        if  n > m:
            n = n % m
        else:
            m = m % n
    print(m + n)

try:
    Evkl(int(sys.argv[1]), int(sys.argv[2]))
except Exception as e:
    print("usage: python3 EvklidAlgo.py [num1] [num2]")
