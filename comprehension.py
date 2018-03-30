import sys
i = int(sys.argv[1])
print('Enter a number: ' + str(i) )
liste=[" " * (i-n )+ "*" * (2*n-1  ) if n < i  else " " * (n-i)+ "*" * (2*((2*i)-n)-1) for n in range(1,i*2 + 1)]
print ("\n".join(liste))