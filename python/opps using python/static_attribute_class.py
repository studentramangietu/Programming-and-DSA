# static attributes(this attribute belongs toi thge class it self not for other instance)

class User:
    user_count = 0

    def __init__(self, username, email):
        self.username = username
        self.email = email
        User.user_count += 1

    def display_user(self):
        print(f"Username: {self.username}, Email: {self.email}")


user1 = User("raman", "ramman@gmail.com")
user2 = User("sally123", "sally@gmail.com")

print(User.user_count)
print(user1.user_count)