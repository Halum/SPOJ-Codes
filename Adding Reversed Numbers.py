def rev( a ):
    n = int(0)
    while(a > 0):
        n = n * 10
        n = n + a%10
        a = int(a / 10)
    return n
        

total = input()
total = int(total)

for i in range(0, total):
    data = input()
    (a,b) = data.split(' ')
    a = int(a)
    b = int(b)


    a = rev(a)
    b = rev(b)

    ans = a+b
    ans = rev(ans)

    print(ans)
    
    
