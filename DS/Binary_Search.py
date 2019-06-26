def binary_search(array,number):
    count=0
    while len(array)>=1:
        mid=int((len(array))/2)
        if(number)==array[mid]:
            mid=number
            count+=1
            break
        elif (number)>array[mid]:
            array=array[mid:]           
        elif(number)<array[mid]:
            array=array[:mid]
        count+=1  
        print(array)
    return(mid,count)

binary_search([0,1,2,3,4,5,6,7,8,9,10],10)
