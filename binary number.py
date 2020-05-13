num = int(input())
stack = []
l1 = []
l2 = []
while(num>0):
    digit = num % 2
    stack.append(digit)
    num = num//2 
stack.reverse()
for i in stack:
    result= ""
    result = result + str(i)
    
    
    print(result,end ="")
    
for j in stack:
    if(j == 0):
        l1.append(j)
    else:
        l2.append(j)
print("\n1s is = ",len(l2),"\n"+"0s is = ",len(l1))
