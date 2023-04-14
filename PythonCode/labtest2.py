scr1 = int(input("Enetr the first level score: "))
if scr1 >=280:
    scr2 = int(input("Enetr the second level score: "))
    if scr2 >= 400:
        scr3 = int(input("Enter the third level score: "))
        if scr3 >= 500:
            print("You are the champion")
        else:
            print("Lose in the last level")
    else:
        print("fail to complete the second level")
else:
    print("failed to complete the first level")