def bubble_sort(array):
    a=array
    print(len(a))
    for i in range(len(a)-1):        
        for j in range(len(a)-i-1):
            if a[j]>a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]           
            print(a)
    return(a)
                
bubble_sort([3,9,1,5,7,6,8,11,10,4,99,4,55])
