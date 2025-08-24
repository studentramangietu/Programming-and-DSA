name = "raman"
age = 19

print(type(name))
print(type(age))

print(name.capitalize())

class Dog:
    def __init__(self,name,breed,owner):
        self.name=name
        self.breed=breed
        self.owner=owner

    def bark(self):
        print("woof woof")    
        
class Owner:
    def __init__(self,name,address,phn_no):
        self.name=name
        self.address=address
        self.contact=phn_no

owner1=Owner("raman","kali nagar",9178)        
dog1=Dog("monu","street",owner1)
dog1.bark()
print(dog1.owner.name)
print(dog1.name)

owner2=Owner("mama","mandaliya",9777)
dog2=Dog("sonu","labrador",owner2)
dog2.bark()
print(owner2.name)
