fact = 1
n = int(input())
for i in range(n):
    num = int(input())
    for j in range(1,num+1):
        fact = fact * j
    print(fact)
    fact=1