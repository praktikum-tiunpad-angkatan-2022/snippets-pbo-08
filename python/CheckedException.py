# setidaknya python masih ngethrow error tanpa perlu diberi tahu throw nya kayak cpp
# Attempt to open the file 'C:\\test\\a.txt'.
with open("C:\\test\\a.txt", 'r') as file:
    for counter in range(3):
        line = file.readline()
        if not line:
            # Exit the loop if the end of the file is reached or an error occurs.
            break
        print(line, end='')
