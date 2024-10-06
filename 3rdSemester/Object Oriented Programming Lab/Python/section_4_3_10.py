import copy
class Student:
    def __init__(self,i=0,n="",g=0.0):
        print("In Parameterized Constructor")
        self.id=i
        self.name=n
        self.gpa = g
    def __del__(self):
        print("Destructor")
    def show(self):
            print(str(self.id)  + " " + str(self.name) + " " + str(self.gpa)) 

s1 = Student(1011,"Ali Ahmad Khan", 3.4)
s1.show()
s2 = copy.copy(s1)
s2.show()
s3 = copy.deepcopy(s1)
s3.show()

del s1
del s2
del s3