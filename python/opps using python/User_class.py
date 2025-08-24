# accessing and modifying datas
# traditional way: make the data private and use getters and setters

from datetime import datetime

class User:
    def __init__(self, username, email, password):
        self.username = username
        self._email = email  # makinmg an attribute protected by underscore and use double underscore to make it private and both can be accessed within the class
        self.password = password

    def say_hi_to_user(self, user):
        print(
            f"sending message to {user.username}: hii {user.username} , its {self.username}"
        )

    def get_email(self):
        return self._email

    def clean_email(self):
        return self._email.lower().strip()
    
    def get_email(self):
        print(f"email accessed at {datetime.now()}")
        return self._email
    
    def set_email(self,new_email):
        if "@" in new_email:
            self._email=new_email


user1 = User("raghav", "  Rag@gmail.com  ", "123")

user2 = User("raman", "raman@gmail.com", "abc")

user1.say_hi_to_user(user2)  # using functioin to greet

user1.email = "raghav@gmail.com"  # changing the email or name in an object user
print(user1._email)        
print(user1.clean_email())

user1.set_email("ramanjeet@gmail.com")
print(user1.get_email())
