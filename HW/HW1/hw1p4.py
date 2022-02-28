##  Nate Chism
##  HW1P4

##  See if if you come come up with an example of a dictionary that has tuples and lists as well. 
#   Do some queries to show how it works.

##  Scenario: Field of solar panels with fixed positions. 
#       tuples represent position in the field in (row, column) format
#       lists represent solar panel in [Serial ID, Last Maitenance Date, Maitenance Provider Name]

#locations in panel array would not change, but information about panels requires updating, 
# hence the locations as tuples and panel info in list format


## I built my dictionary structure (LINES 27 - 34) with help from https://www.w3schools.com/python/python_dictionaries.asp
# learned basic structure of dict and how to find length of a dictionary (LINE 37)

#panel locations as tuples
panel1 = (0,0)
panel2 = (0,1)
panel3 = (0,2)
panel4 = (1,0)
panel5 = (1,1)
panel6 = (1,2)

#panel locations as lists
panel1_info = [1001, "17/05/2021", "J. Doe"]
panel2_info = [1002, "13/12/2021", "N. Chism"]
panel3_info = [1003, "06/01/2022", "T. Trojan"]
panel4_info = [1004, "29/02/2020", "T. Trojan"]
panel5_info = [1005, "31/07/2021", "J. Doe"]
panel6_info = [1006, "21/09/2021", "J. Doe"]

#dictionary with locations as dictionary keys and information as dictionary values
panelDirectory = {
    panel1 : panel1_info,
    panel2 : panel2_info,
    panel3 : panel3_info,
    panel4 : panel4_info,
    panel5 : panel5_info,
    panel6 : panel6_info
}

## if someone wished to see a panel's information they could simply call the panel location
print(panelDirectory[(1,0)])

#if someone wished to update a panels information they could see
panel4_info[1] = "30/01/22"
panel4_info[2] = "N. Chism"
# and see the update
print(panelDirectory[(1,0)])

#if a note needed to be added to a panel the user could do so
panel5_info.append("Will need main actuator replaced by September 2023")
print(panelDirectory[(1,1)])
