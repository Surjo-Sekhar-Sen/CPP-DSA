n = int(input("Enter the number of rows: "))

for i in range(n):
    for j in range(i):
        print(" ", end = " ")
    for k in range(i,  n):
        print(" * ", end = " ")
    print("")
for t in range(n-1):
    for l in range(t, n-2):
        print(" ", end = " ")
    for m in range(t+2):
        print(" * ", end = " ")
    print("")