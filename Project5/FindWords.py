# This program receives a list of words from a text file. And searches for words in a seperate text. 

wordList = []
notFoundList = []
foundWordList = []
rowList = []
columnList = []

def findWord(rowOrCol,inRow, number):
    rowColString = ""
    # This converts rowOrCol into a string
    rowColString = "".join(rowOrCol)

    for word in wordList:
        if (word in rowColString):
            if (inRow == True):
                # Adds word to foundWordList if word found in row
                foundWordList.append(word + " row: " + str(number))
            else:
                # Adds word to foundWordList if word found in column
                foundWordList.append(word + " column: " + str(number))
                
            # Removes word from notFoundList if found
            notFoundList.remove(word)
            
# Gets text files
puzzleFile = open('puzzle.txt', 'r')
wordFile = open('wordList.txt', 'r')

# gets the words in the word file
for line in wordFile:
    wordString = line.split()
    print(wordString)
    # adds words to list
    wordList.append(wordString[0])
    notFoundList.append(wordString[0])

# reads the rows in the puzzle file
for line in puzzleFile:
    # gets each individual character in the row
    rowList.append(line.split())

columnSize = len(rowList[0])
# gets the columns in the puzzle file
for i in range(columnSize):
    columnList.append([ row[i] for row in rowList ] )

# This numbers the rows in the text file, and sends the parameters to findWord
for index, row in enumerate(rowList):
    findWord(row, True, index)
    
# This numbers the columns in the text file, and sends the parameters to findWord
for index, column in enumerate(columnList):
    findWord(column, False, index)
    
print()
print("Words Found: ")
for foundWord in foundWordList:
    print(foundWord)
    
print()
print("Not Found List: ")
for notFoundWord in notFoundList:
    print(notFoundWord)

