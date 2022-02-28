#   lab1p2_1.py
#   Nathan Chism
#   EE355 - Lab 1 - 24 JAN 2022


## file read block (LINES 6 - 11) coded using content from website:  https://www.pythontutorial.net/python-basics/python-read-text-file/

with open('in.txt') as f:   ##read file contents to palTest string
    palTest = f.read()

## end file read block from pythontutorial.net


########LINES 14 - 27, 31 constructed using Lab1.pptx on blackboard ########

print("String input for analysis         : " +palTest)

##convert to lower case
palTest = palTest.lower()
palFlag = 0 ##initialize palindrome flag
print("Input string after pre-processing : "+palTest)    ##display pre-processed string

##initialize two pointers at start and end of string
start = 0
end = len(palTest) - 1

##check if the two characters pointed by two pointers are the same
##move two pinters until they meet

for x in range(len(palTest)):   ##iterate through string
    if palTest[start] != palTest[end]:  #are items equal?
        palFlag = 1 #set palindrome flag
        break
    #increase indexes
    start += 1  
    end -= 1

print("\n\nIs the input string a palindrome?\n")

if palFlag: #was not a palindrome
        print("NO")
else:   #was a palindrome
    print("YES")
