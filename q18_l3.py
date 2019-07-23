#Question:
#A website requires the users to input username and password to register. Write a program to check the validity of password input by users.
#Following are the criteria for checking the password:
#1. At least 1 letter between [a-z]
#2. At least 1 number between [0-9]
#1. At least 1 letter between [A-Z]
#3. At least 1 character from [$#@]
#4. Minimum length of transaction password: 6
#5. Maximum length of transaction password: 12

import re

def test_password( list_of_passwords ):
    value = [] 
    for p in list_of_passwords:
        if len(p) < 6 and len(p) > 12:
            continue
        else:
            pass
        if not re.search('[a-z]',p):
            continue
        elif not re.search('[A-Z]',p):
            continue
        elif not re.search('[0-9]',p):
            continue
        elif not re.search('[$#@]',p):
            continue
        elif re.search('\s',p):
            continue
        else:
            pass

        value.append(p)

    return value

passwords = [x for x in "ABd1234@1,a F1#,2w3E*,2We3345".split(',')]
print( ",".join(test_password( passwords )) )
