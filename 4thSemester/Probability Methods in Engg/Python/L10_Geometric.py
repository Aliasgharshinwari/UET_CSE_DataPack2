#What is the probability that the coin has to be flipped i) 4 
#times ii) more than 4 times, for getting heads for the first 
#time? The probability of heads is 0.6 and the probability of tails is 0.4.
def geometric_probability(m, p):
    probability = pow(1 - p, m - 1) * p
    return probability

# Case 1: Probability of getting heads for the first time after 4 coin flips
m = 4
p_heads = 0.6
prob_4_flips = geometric_probability(m, p_heads)
print("Probability of getting heads after 4 flips: {:.4f}" .format(prob_4_flips))

# Case 2: Probability of getting heads for the first time after more than 4 coin flips
prob_more_than_4_flips = pow(1 - p_heads, m)
print("Probability of getting heads after more than 4 flips: {:.4f}".format(prob_more_than_4_flips))