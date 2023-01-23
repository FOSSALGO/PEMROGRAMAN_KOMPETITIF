n = int(input())
U = [] 
sum = 0
for i in range(0,n,1):
  U.append(int(input()))
  sum = sum + U[i]
print(sum)
