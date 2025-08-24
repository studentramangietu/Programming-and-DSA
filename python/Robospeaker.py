import os

if __name__ == '__main__':
    print("welcpme to Robo speacker")
    while True:

        x=input("enter what you wanna say:")
        if x=="`":
            os.system("spd-say 'bye bye freind ' ")
            break
        command=f"spd-say {x}"
        os.system(command)