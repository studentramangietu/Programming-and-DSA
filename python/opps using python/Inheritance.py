#Inheritance
#It involves creating new classes (subclasses or derived classes) based on existing classes (superclasses or base class)

class Vehicle:
    def __init__(self,brand,model,year):
        self.brand=brand
        self.model=model
        self.year=year

    def start(self):
        print("vehicle is starting...")    

    def stop(self):
        print("vehicle is stoping...")    

class Car(Vehicle):
    def __init__(self, brand, model, year,no_of_doors,no_of_wheels):
        super().__init__(brand,model,year)
        self.no_of_doors=no_of_doors
        self.no_of_wheels=no_of_wheels

class Bike(Vehicle):
    def __init__(self, brand, model, year,no_of_wheels):
        super().__init__(brand, model, year)  
        self.no_of_wheels=no_of_wheels


car=Car("ford","focus","2000",5,4)     
bike=Bike("honda","slender","2018",2)   
print(car.__dict__)     #we can result as a form of dictionary with all atributes
car.start()       
car.start()