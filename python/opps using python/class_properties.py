# properties

class User:
    def __init__(self, username, email, password):
        self.username = username
        self._email = email #make the attribute protected
        self.password = password

    @property
    def email(self):
        print("email accessed!!")
        return self._email

    @email.setter
    def email(self,new_email):
        if "@" in new_email:
            self._email=new_email

user1 = User("steve", "steve@gmaail.com", "abcdef")

user1.email="this nahnjhaj"
print(user1.email)  #here no gewt or set method is reqd we can get this by directly printing user.email
