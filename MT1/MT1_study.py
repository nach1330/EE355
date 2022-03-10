# MIDTERM 1 STUDY GUIDE - Python

#4.      (for exam) A robot moves in a plane starting from the original point (0,0). The robot can move toward UP, DOWN, LEFT and RIGHT with a given steps. The trace of robot movement is shown as the following: (10 points, 10 min)
""" UP 5
DOWN 3
LEFT 3
RIGHT 2
The numbers after the direction are steps. Please write a program to compute the distance from current position after a sequence of movement and original point. 
If the distance is a float, then just print the nearest integer.
Example: If the following tuples are given as input to the program:
UP 5
DOWN 3
LEFT 3
RIGHT 2
Then, the output of the program should be:
2 """

#2. (for exam) What is the output of the following program (1 point, 1 min):
""" y = 8
    z = lambda x : x * y
    print z(6)
    a. 48              <- ANSWER
    b. 14
    c. 64
    d. None """



#3. (for exam) What is the output of the following code (1 point, 1 min):
""" print 9//2
    a. 4.5
    b. 4.0
    c. 4                 <- ANSWER
    d. Error """


#6. (for exam) What is the output of the following program (1 point, 1 min):
"""  def myfunc(a):
         a = a + 2
            a = a * 2
          return a     
 print myfunc(2)
    a. 8
    b. 16
    c. Identation Error         <- ANSWER
    d. Runtime Error
 """

 #7. (for exam) What does the following program print (1 point, 1 min):
"""  
 a = True
 b = False
 c = False 
 if a or b and c: 
          print "AWESOME_PYTHON"
 else: 
          print "NOT_SO_AWESOME_PYTHON"

    a. AWESOME_PYTHON               <- ANSWER
    b. NOT_SO_AWESOME_PYTHON
    c. Compile Error
    d. Runtime Error """

#python file I/O
with open('test.txt', 'r') as f:
    lines = f.read()
    print(lines)

#this reads each line of the file and prints it