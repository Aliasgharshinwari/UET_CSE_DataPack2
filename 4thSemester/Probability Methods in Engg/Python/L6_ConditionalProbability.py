#A teacher gave his class two quizzes. 25% of the class 
#passed both quizzes and 42% of the class passed the first 
#quiz. What percent of those who passed the first quiz also 
#passed the second quiz?

def calc_conditional_probability(p_a_and_b, p_b):
    return p_a_and_b / p_b

p_a_and_b = 0.25  # Probability of both A and B occurring
p_b = 0.42  # Probability of B occurring
conditional_prob = calc_conditional_probability(p_a_and_b, p_b)
print("Conditional Probability: {:.4f}".format(conditional_prob))