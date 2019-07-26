arr = [12, 11, 13, 5, 6, 7]
def merge_sort(unsorted_array):
    print unsorted_array
    l = len(unsorted_array)
    m = l/2
    if l > 1:
        left = unsorted_array[:m]
        right = unsorted_array[m:]

        merge_sort(left)
        merge_sort(right)

        i = 0
        j = 0
        k = 0
        while( i < len(left) and j < len(right) ):
            if left[i] <= right[j]:
                unsorted_array[k] = left[i]
                i+=1
            else:
                unsorted_array[k] = right[j]
                j+=1
            k+=1

        while( i < len(left) ):
            unsorted_array[k] = left[i]
            i+=1
            k+=1

        while( j < len(right) ):
            unsorted_array[k] = right[j]
            j+=1
            k+=1


print( arr )
merge_sort( arr )
print( arr )

