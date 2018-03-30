import sys
n = sys.argv[1]
n = int(n)
x = n + 1
print("Enter a Number :", n)
def f(n,m=0):
  if  n>=1 and m ==0 :
    print((" ") * (int(n) - 1) + ("*") * (2 * (int(x) - int(n)) - 1))
    return f(n - 1,0)
  elif n==0 and m==0 :
    return f(x-1,1)
  if m==1 and 0<n:
    print(((" ")*(x-n) + ("*")*(2*(int(n))-3)))
    return(f(n-1,1))

f(n)