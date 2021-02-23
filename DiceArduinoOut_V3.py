def printleds(listname, arduino):
    for num in sorted(set(listname)):
        count = listname.count(num)
        while count:  # Prints duplicates on the arduino LED setup
            values = bytearray(str(num).encode())
            time.sleep(1)
            arduino.write(values)
            time.sleep(1)
            count = count - 1
