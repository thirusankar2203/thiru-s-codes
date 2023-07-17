import time
dict={"2203":["Thirumurugan","60000"] , "1606":["Keerthivassan","70000"] , "6655":["Sankaralingam","80000"]}
friends=["keerthivassan","sankaralingam","anuragaa","siddharth"]
passkey=input("Enter pin to login pondy->pay !!!!! ")
for i in range(1,10):
    for key,value in dict.items():
        if(key==passkey):
            flag=0
            print("\n\n")
            send=value[0]
            send_amnt=value[1]
            print("Welcome "+value[0]+" !!!!!")
            print("\nServices offered : \n1 . Send to a friend\n2 . Send to a new friend\n3 . Check bank balance")
            services=int(input("\nEnter your choice to continue : "))
            if(services==1):
                recv=input("\nEnter the name of your friend to start transfer : ")
                for val in friends:
                    if(val==recv):
                        flag=1
                        print("\nYou are sending payment to "+recv)
                        cont=input("\nAre you sure want to continue ..... ")
                        if(cont=="yes"):
                            amount=int(input("\nEnter the amount to be transferred in rupees : "))
                            amount_present=int(send_amnt)
                            if(amount<amount_present):
                                print("\nTransferring Rs."+str(amount)+" from "+send+" to "+recv)
                                time.sleep(2)
                                print("\nTransaction successful !!!!!")
                                balance=amount_present-amount
                                print("\nBalance amount left : Rs."+str(balance))
                                value[1]=balance
                                time.sleep(2)
                                print("\n")
                                print("Enter exit to log out of the application .....")
                            else:
                                print("\nTransfer failed due to insufficient account balance !!!!!")
                                print("\n")
                                print("Enter exit to log out of the application .....")
                                break
                        else:
                            print("\nLogging out from the server ..... ")
                            print("\n")
                            print("Enter exit to log out of the application .....")
                            break
                if(flag==0):
                    print("\nName is not in your friends list .....\ntry to send payment in Send to a new freind option .....")
                    print("\n")
                    print("Enter exit to log out of the application .....")
            elif(services==2):
                recv=input("\nEnter the name of your new friend to start transfer : ")
                friends.append(recv)
                print("\nAre you sure want to continue .....")
                cont=input("")
                if(cont=="yes"):
                    amount=int(input("\nEnter the amount to be transferred in rupees : "))
                    amount_present=int(send_amnt)
                    if(amount<amount_present):
                        print("\nTransferring Rs."+str(amount)+" from "+send+" to "+recv)
                        time.sleep(2)
                        print("\nTransaction successful !!!!!")
                        balance=amount_present-amount
                        print("\nBalance amount left : Rs."+str(balance))
                        value[1]=str(balance)
                        time.sleep(2)
                        print("\n")
                        print("Enter exit to log out of the application .....")
                    else:
                        print("\nTransfer failed due to insufficient account balance !!!!!")
                        print("\n")
                        print("Enter exit to log out of the application .....")
                        break
                else:
                    print("\nLogging out from the server ..... ")
                    print("\n")
                    print("Enter exit to log out of the application .....")
                    break

            elif(services==3):
                avail_balance=value[1]
                print("\nAvailable balance in account : Rs."+avail_balance)
                time.sleep(2)
                print("\n")
                print("Enter exit to log out of the application .....")

            else:
                print("\nWrong choice !!!!! please choose a correct option ..... ")
                time.sleep(2)
                print("\n")
                print("Enter exit to log out of the application .....")
                                
                               

    if(flag==1):
        print("______________________________________________________")
        print("\n")
        print("User not found !!!!!")
        print("Register yourself in pondy->pay to login easily .....")
        print("\n")
        print("______________________________________________________")
