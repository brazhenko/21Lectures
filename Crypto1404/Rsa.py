import sys
import math
import random

def Euler(p, q):
    return (p - 1) * (q - 1)

def Keys(p, q):
    primes = [2749,  2753,    2767,    2777,    2789,    2791,    2797,    2801,     2803,    2819,
              2833,
              2837,  2843,    2851,    2857,    2861,    2879,    2887,    2897,     2903,
              2909,  2917,    2927,    2939,    2953,    2957,    2963,    2969,     2971,    2999,
              3001,
              3011,  3019,    3023,    3037,    3041,    3049,    3061,    3067,     3079,
              3083,  3089,    3109,    3119,    3121,    3137,    3163,    3167,     3169,    3181,
              3187,
              3191,  3203,    3209,    3217,    3221,    3229,    3251,    3253,     3257,
              3259,  3271,    3299,    3301,    3307,    3313,    3319,    3323,     3329,    3331,
              3343,
              3347,  3359,    3361,    3371,    3373,    3389,    3391,    3407,     3413,
              3433,  3449,    3457,    3461,    3463,    3467,    3469,    3491,     3499,    3511,
              3517,
              3527,  3529,    3533,    3539,    3541,    3547,    3557,    3559,     3571]
    m = p * q
    phi = Euler(p, q)
    e = primes[random.randint(0, len(primes)-1)]
    d = 100
    while  d * e % phi != 1:
        d += 1
    return [m, e, d]

def Encrypt(m, e, Msg):
    return (Msg ** e) % m

def Decrypt(m, d, Crypto):
    return (Crypto ** d) % m

prime1 = 307
prime2 =  73

keys = Keys(prime1, prime2)
print(keys)
print(Encrypt(keys[0], keys[1], int(sys.argv[1])))
print(Decrypt(keys[0], keys[2], Encrypt(keys[0], keys[1], int(sys.argv[1]))))
