#Suppose that a coin is tossed three times. If we assume that 
#the tosses are independent and the probability of getting a 
#heads is 0.4. Find the probabilities of 0, 1, 2 and 3 heads

from math import factorial
from math import pow

def Binomial(n, k,p, q):
    probabilities = []
    
    for k_val in range(k,n + 1):
        binomial_coefficient = factorial(n) // (factorial(k_val) * factorial(n - k_val))
        probability = binomial_coefficient * pow(p, k_val) * pow(q, n - k_val)
        probabilities.append(probability)
        print("For K =", k_val, "P = {:.4f}".format(probability))

n = int(input("Enter Value of n "))
k = int(input("Enter start value of k "))

p = float(input("Enter Value of success probability "))

Binomial(n, k, p, 1 - p)
