N = int(input())
X, Y = list(map(int, input().split())) 
A = []
B = []
for i in range(N):
    AB = input().split()
    A += AB[0]
    B += AB[1]

print(N)
print(X)
print(Y)
print(A)
print(B)