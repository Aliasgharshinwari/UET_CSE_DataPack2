#In a city, 55% of the adults are males. 10% of males use credit card, whereas 2% of females use credit card. One 
#adult is randomly selected for a survey about usage of credit card. Find the probability that the randomly selected person 
#is a male given that this selected person uses a credit card

from TotalProbability import *
def bayesTheorem(pA, pB, pBA):
    return pA * pBA / pB

a1_h1 = Node('A1', 0.1)
a2_h1 = Node('A2', 0.9)
h1 = Node('H1', 0.55, [ a1_h1, a2_h1 ])
a1_h2 = Node('A1', 0.02)
a2_h2 = Node('A2', 0.98)
h2 = Node('H2', 0.45, [ a1_h2, a2_h2 ])

p_M = 0.55
p_M_C = 0.1
p_M_N_C = 0.9

c_probability = probability_of_event([h1, h2], 'A1') #calculate the total probabilty
p_C_M = bayesTheorem(p_M_C, c_probability, p_M)
print(p_C_M)