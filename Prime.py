def IsPrime(n):
    if n<=1:
        return False
    if n == 2:
        return True
    if n%2==0:
        return False
    k=3
    while k<n:
        if n%k==0:
            return False
        k+=2
    return True
