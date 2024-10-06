class Complex:
    def __init__(self):
        self.re=0.0
        self.im=0.0
    def __init__(self,r,i):
        self.re=r
        self.im=i
    def addCom(self,num1,num2):
        self.re=num1.re + num2.re
        self.im=num2.im + num2.im      
    def negate(self):
        self.re=-self.re
        self.im=-self.im
        return self
    def show(self):
        if self.im > 0:
            print(str(self.re) + "+" +str(self.im) + "i") 
        else:
            print(str(self.re) + str(self.im) + "i") 

c1 = Complex(3,2.5)
print("1st Complex Number:" )
c1.show()

    
c2 = Complex(5,3)
print("2nd Complex Number:" )
c2.show()

c = Complex(0,0)
c.addCom(c1,c2)
print("Sum of Two Complex Numbers:" )
c.show()

c = c1.negate()
print("Negate of Complex Number:" )
c.show()