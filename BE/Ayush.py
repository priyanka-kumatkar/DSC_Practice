def convertToSet(st1):
    li = {' '}

    for i in range(len(st1)):
        li.add(st1[i])
    li.remove(' ')
    return li

def actualFunction(str1):
    n=1
    cnt=0
    while n<len(str1):
        s1 =''
        s2 =''
        for i in range (len(str1)):
            if(i<n):
                s1 +=str1[i]
            else:
                s2 +=str1[i]
        l1=convertToSet(s1)
        l2=convertToSet(s2)
        n+=1
        if(l1==l2):
            cnt +=1
    return cnt


InputString = input()
Count = actualFunction(InputString)
print(Count)
