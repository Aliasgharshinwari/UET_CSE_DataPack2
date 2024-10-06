# Let X be the number of heads in three tosses of a fair coin. Find E[X].

from math import *
def BinomialRV(n, k, p, q):
        binomial_coefficient = factorial(n) // (factorial(k) * factorial(n - k))
        probability = binomial_coefficient * pow(p, k) * pow(q, n - k)
        return probability

def Calc_EX():
    EX=0
    for i in range(len(probabilities)):
        EX +=  Sx[i]*probabilities[i]
    
    return EX
     
Sx =[0, 1, 2, 3]
probabilities = [] #Empty list for saving probabilities

print("Sx =", Sx)
for k in range(0,len(Sx)):
    probabilities.append(BinomialRV(3, k , 0.5, 0.5))
print("Px =", probabilities)
print("E[X] =", Calc_EX())

