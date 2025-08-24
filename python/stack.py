stack=[]

def push(item):
    stack.append(item)
    print(f"{item} pushed to stack")

def pop():
    if not stack:
        print("stack is empty")
    else:
        print("item added",stack.pop())        
push(100)
push(200)
print(stack)        