# This is a simpler version of the original V1 Release.
# Guidelines: 
# 1. Replace 'LIST' with name of your list
# 2. Replace 'ARDUINO' with your arduino serial communication variable

def printleds():
    for num in sorted(set(LIST)):
        count = LIST.count(num)
        while count:  # Prints the output on the arduino LED setup
            values = bytearray(str(num).encode())
            time.sleep(1)
            ARDUINO.write(values)
            time.sleep(1)
            count = count - 1
