def ten_two(number):
    ans=[]
    while number!=0:
        ans.append(number%2)
        number//=2
        #print(number)
        if number==1:
            ans.append(1)
            break
    ans.reverse() 
    return(ans)
