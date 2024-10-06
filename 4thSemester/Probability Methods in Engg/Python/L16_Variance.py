# Let X be the number of heads in three tosses of a fair coin. 
#Find VAR[X].

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
     
def Calc_EX_2():
    EX_2 = 0
    for i in range(len(probabilities)):
        EX_2 +=  (Sx[i]*Sx[i])*probabilities[i]
    
    return EX_2

Sx =[0, 1, 2, 3]
probabilities = [] #Empty list for saving probabilities

print("Sx =", Sx)
for k in range(0,len(Sx)):
    probabilities.append(BinomialRV(3, k , 0.5, 0.5))
print("Px =", probabilities)

E_X = Calc_EX()
E_X_2 = Calc_EX_2()
VAR_X = E_X_2 - (E_X * E_X) 

print("E[X] =", E_X)
print("VAR[X] =", VAR_X)