#flag and counter initialization
palFlag = 0
o_palFlag = 0
fl_palFlag = 0
index = 0
count = 0

## file read block (lines 10-11) coded using content from website:  https://www.pythontutorial.net/python-basics/python-read-text-file/

with open('in.txt') as f:
    palTest = f.read()

print(palTest)

## end file read block

##convert to lower case
palTest = palTest.lower()

#display string after conversion
print("Input string after pre-processing: "+palTest)

##initialize two pointers
start = 0
end = len(palTest) - 1

print("Initialize two pointers at positions: %d and %d."%(start, end))

##check if the two characters pointed by two pointers are the same
##move two pinters until they meet
print("Move pointers until they meet.")

for x in range(len(palTest)):   #iterate through string
    if palTest[start] != palTest[end]: #there is a difference at one of the end points
        if(start == 0):
            if(palTest[start] == palTest[end - 1]): #the last term is wrong
                index = end     #letter to be removed if only mistake
                palFlag += 1    #palindrome error counter
                o_palFlag += 1  #one letter off counter
            elif(palTest[start + 1] == palTest[end]):   #the first term is wrong
                index =  start  #letter to be removed if only mistake
                palFlag += 1    #palindrome error counter
                o_palFlag += 1  #one letter off counter
            else:
                palFlag += 1    #palindrome error counter

        elif(end == 0):
            if(palTest[start - 1] == palTest[end]):
                index = end #letter to be removed if only mistake
                palFlag += 1    #palindrome error counter
                o_palFlag += 1  #one letter off counter
            elif(palTest[start] == palTest[end + 1]):
                index =  start  #letter to be removed if only mistake
                palFlag += 1    #palindrome error counter
                o_palFlag += 1  #one letter off counter
            else:
                palFlag += 1    #palindrome error counter

        elif(palTest[end + 1] == palTest[start - 1] and palTest[end - 1] == palTest[start]):    #only one letter off
            if(o_palFlag >= 1):
                palFlag += 1    #palindrome error counter
            
            index = end  #letter to be removed if only mistake
            o_palFlag += 1  #one letter off counter

        elif(palTest[start + 1]==palTest[end] and palTest[start-1]==palTest[end+1]):    #only one letter off
            if(o_palFlag >= 1):
                palFlag += 1    #palindrome error counter

            index = start  #letter to be removed if only mistake
            o_palFlag += 1  #one letter off counter

        else:
            palFlag += 1    #palindrome error counter
    #incriment indexes
    start += 1
    end -= 1


print("\n\nIs the input string a palindrome?\n")

if palFlag: #palindrome flag set
    if (palFlag > 2 and o_palFlag != 1 or palFlag == 2 and o_palFlag == 0): #more than letter was off OR two letters in the middle are wrong
        print("NO")
    else:
        print("YES. Delete ", (palTest[index]), " at position ", (index), ".")  #where to remove letter to make string palindrome
else:
    print("YES")
