#An urn contains two black balls and three white balls. Two 
#balls are selected at random from the urn without 
#replacement and the sequence of colors is noted. Find the 
#probability that the second ball is white (irrespective of 
#first outcome).

def probability_of_event(nodes, name):
    probability = 0

    def node_probability(node, name):
        if node.name == name:
            return [node.probability]

        if len(node.childrens) == 0:
            return []

        probabilities = []
        for children in node.childrens:
            for probability in node_probability(children, name):
                probabilities.append(node.probability * probability)
        
        return probabilities

    for node in nodes:
        probability += sum(node_probability(node, name))

    return probability

class Node:
    def __init__(self, name, probability, childrens=[]):
        self.name = name
        self.probability = probability
        self.childrens = childrens

a1_h1 = Node('A1', 0.25)
a2_h1 = Node('A2', 0.75)
h1 = Node('H1', 0.4, [ a1_h1, a2_h1 ])

a1_h2 = Node('A1', 0.5)
a2_h2 = Node('A2', 0.5)
h2 = Node('H2', 0.6, [ a1_h2, a2_h2 ])

a1_probability = probability_of_event([h1, h2], 'A1')
a2_probability = probability_of_event([h1, h2], 'A2')
print("Probability of Black = {:.4f}".format(a1_probability))
print("Probability of White = {:.4f}".format(a2_probability))