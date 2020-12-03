
numbersToTest = list(range(2,99999999))

with open("collatz.txt", "w" ) as outFile:
    for index, currNum in enumerate(numbersToTest):
        while currNum != 1:
            if currNum % 2 == 0:
                currNum = currNum / 2
            elif currNum % 2 != 0:
                currNum = (currNum * 3) + 1
        if currNum == numbersToTest[-1]:
            print("End of list has been reached. Sucess.", file = outFile) #remove "file = outFile" statements from print statements to print to the console instead
            break
        if currNum == 1:
            print(numbersToTest[index], ": leads back to 1", file = outFile)
