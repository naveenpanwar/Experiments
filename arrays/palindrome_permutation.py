def check_palindrome(s):
    s = s.lower()
    if len(s) == 1:
        return True

    check = 0
    for i in s:
        shifts = (ord(i)-ord("a"))+1
        print(shifts)
        if shifts < 0:
            continue
        elif ( check & ( 1 << shifts  ) ) == 0:
            check = check | ( 1 << shifts)
        else:
            check = check & (~( 1 << shifts ))

    n = check 
    count = 0
    while(n):
        count = count + (n&1)
        n >>= 1

    print("count = "+str(count))

    if len(s)%2 == 0:
        if count > 0:
            return False
        else:
            return True
    elif len(s)%2 != 0 and count == 1:
        return True

def test():
    assert check_palindrome("Tact Coa") == True
    assert check_palindrome("a") == True
    assert check_palindrome("aa") == True
    assert check_palindrome("ab") == False 

test()
