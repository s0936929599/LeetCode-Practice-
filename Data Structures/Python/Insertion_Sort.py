def insertion_sort(array):
    a=array
    for i in range(1,len(a)):
        key=a[i]
        j=i-1
        while j>=0 and a[j]>key:
            a[j+1]=a[j]
            j-=1
        a[j+1]=key
    return(a)

insertion_sort([3,9,1,5,7,6,8,11,10,4,99,4,55])
