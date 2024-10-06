class Poly:
    def __init__(self):
        self.height = 0
        self.length = 0
    def set_values(self,h,l):
        self.height = h
        self.length = l

class Rect(Poly):
    def area(self):
        return self.height * self.length

class Tri(Poly):
    def area(self):
        return (self.height * self.length)/2

r1 = Rect()
t1 = Tri()
r1.set_values(10,20)
print("Area of Rectangle " + str(r1.area()))
t1.set_values(10,20)
print("Area of Triangle " + str(t1.area()))