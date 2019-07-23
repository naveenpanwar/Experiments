def some_func(some_list):
    print( id(some_list) )
    print(some_list)
    some_list[3] = 10
    print( id(some_list) )
    print(some_list)

def some_other_func(some_list):
    print( id(some_list) )
    print(some_list)
    some_list = [10,20,30]
    print( id(some_list) )
    print(some_list)

print(" All the deal with modifying the list")
one_list = [1,2,3,4,5,6]
print( id(one_list) )
some_func(one_list)
print( one_list )
print( id(one_list) )

print(" All the deal with assigning a new list in the function")
two_list = [1,2,3,4,5,6]
print( id(two_list) )
some_other_func(two_list)
print( two_list )
print( id(two_list) )
