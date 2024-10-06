#Let X be the number of heads in three independent tosses 
#of a coin. Find the pmf of X. (Binomial RV)

from math import *

def BinomialRV(n, k, p, q):
        binomial_coefficient = factorial(n) // (factorial(k) * factorial(n - k))
        probability = binomial_coefficient * pow(p, k) * pow(q, n - k)
        return probability

Sx =[0, 1, 2, 3]
probabilities = [] #Empty list for saving probabilities

print("Sx =", Sx)
for k in range(0,len(Sx)):
    probabilities.append(BinomialRV(3, k , 0.5, 0.5))
print("Px =", probabilities)
