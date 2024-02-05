def century(year):
    # Finish this :)
    i = 100
    sum = year/100
    first = 0
    
    first = int(str(sum)[0] + str(sum)[1])
    first = first + 1
    
    while i != sum:
        first = first - 1
        i+=100
        
    
    
    
    return first
print(century(1900))