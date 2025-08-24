class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def greet(self):
        print(f"Hello,my name is {self.name} and my age is {self.age}")         
        
person1=Person("naman",69)
person1.greet()

person2=Person("saman",619)
person2.greet()