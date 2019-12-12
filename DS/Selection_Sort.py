def selection_sort(array):
    a=array
    for i in range(len(a)):
        min_n=a[i]
        for j in range(i,len(a)):        
            if(min_n>a[j]):
                tmp_num=a[j]
                tmp_loc=j
                min_n=tmp_num         
        a[tmp_loc]=a[i]
        a[i]=min_n
    return(a)
                
selection_sort([3,9,1,5,7,6,8,11,10,4,99,4,55])
