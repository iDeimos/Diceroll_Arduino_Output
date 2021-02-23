import time


def checklistval():  # Logic to turn on specified LEDs based on list input
    for num in range(1, 7):  # Check for the numbers 1-6
        if num in LISTNAME:  # Is the integer NUM in the list of rolls?
            if LISTNAME.count(num) > 1:  # Are there duplicates of the value?
                x_rolls = LISTNAME.count(num)
                print('There are ' + str(x_rolls) + ' duplicates of the number ' + str(num))    # Control string

                while x_rolls:  # Prints duplicates on the arduino LED setup
                    values = bytearray(str(num).encode())
                    time.sleep(1)
                    arduino.write(values)
                    time.sleep(1)
                    x_rolls = x_rolls - 1
            else:   # Prints non-duplicates on the arduino LED setup
                values = bytearray(str(num).encode())
                time.sleep(1)
                arduino.write(values)
                time.sleep(1)
