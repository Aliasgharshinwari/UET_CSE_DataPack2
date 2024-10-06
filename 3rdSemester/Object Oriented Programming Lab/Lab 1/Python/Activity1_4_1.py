class heater:
    def __init__(self):
        self.temp = 15

    def warmer(self):
        self.temp += 5

    def cooler(self):
        self.temp -= 5

    def show(self):
        return self.temp

h1 = heater()
h2 = heater()

h1.cooler()
print(h1.show())
print("For Heater 1 ")
print("Temperature: ")
print(h1.show())
h1.warmer()
print("Warmer Temperature: ")
print(h1.show())
h1.cooler()
print("Cooler Temperature: ")
print(h1.show())
print("For Heater 2 ")
print("Temperature: ")
print(h2.show())
h2.warmer()
h2.warmer()
print("Warmer Temperature: ")
print(h2.show())
h2.cooler()
print("Cooler Temperature: ")
print(h2.show())