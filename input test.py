n,k= int(input())
#k = int(input())
list = []
if(n,k>=0 and n,k<=10**7):
    for i in range(n):
        num = int(input())
        if(num>=0 and num<=10**9 and num%k==0):
            list.append(num)
print(len(list))
            
        
        
    
    