help ='''start - to start the car
stop - to stop the car
quit - to exit'''

start = "Car started...ready to go"
stop = "Car stopped..."
command  = ""
started = False


while command != True:
    command = input("> ").lower()
    if command == "start":

        if started:
            print("Car is already started...")
        else:
            print(start)
            started = True
    elif command == "stop":

        if not started:
            print("Car is already stopped...")
        else:
            print(stop)
            started = False

    elif command == "help":
        print(help)

    elif command =="quit":
        break
    else:
        print("I don't understand that...")
