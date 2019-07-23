S = "naveen"

def printSubs(S):
    if len(S) == 1:
        print(S)
        return
    else:
        print(S[1:])
        printSubs(S[:1])
        printSubs(S[1:])

printSubs(S)
