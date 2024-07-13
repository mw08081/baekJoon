def Fac(n):
    if n == 0 :
        return 1
    else :
        return n*Fac(n-1)
    
n = int(input())
st = str(Fac(n))

cnt = 0
for i in range(len(st)-1, 0, -1) :
    if st[i] == '0' :
        cnt += 1
    else :
        break

print(cnt)
