from mimetypes import init


class Point:
    def __init__(self):
        self.x = 0
        self.y = 0

    def __init__(self,a,b):
        self.x = a
        self.y = b

    def setX(self,a):
        self.x = a

    def setY(self,b):
        self.y = b

    def getX(self):
       return self.x

    def getY(self):
        return self.y

    def show(self):
        print("( "+str(self.x)+" , "+str(self.y)+" )")

P1=Point(0,0)
P2=Point(2,4)

P1.setX(3)
P1.setY(8)
print("Point 1: "+str(P1.getX())+" "+str(P1.getY()))
print("Point 2: "+str(P2.getX())+" "+str(P2.getY()))