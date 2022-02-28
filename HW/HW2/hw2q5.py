#HW2 question 5

#Instructions : Write a Phython program to return maximum occurring character in a given input string. 


def main():
    print("Enter a string to test : ")  #gets string for testing from user
    str = input()   
    maxchar = str[0]    #picks first element as arbitrary max character
    maxct = 0
    for x in str:   #iterate for search character through string from user
        ct = 0
        for y in str:   #iterate for comparison characters through string from user
            if x == y:  #check characters equal
                ct += 1
        if ct > maxct:  #if character is more frequent than previous max, update the values
            maxchar = x
            maxct = ct
    print(maxchar)  #print the max charactrer

if __name__ == '__main__':
    main()
