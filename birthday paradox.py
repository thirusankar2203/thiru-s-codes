name_dob={"thiru":"22.03.2003" , "keerthi":"16.06.2006" , "bala sai ganesh":"16.10.2009" , "janani shree":"28.05.2005" , "sankaralingam":"08.08.1975" , "kaliammal":"07.11.1976" , "anuragaa":"25.11.2002" , "siddharth":"19.08.2002" , "bhuvaneshwar":"12.08.2002" , "bala chander":"23.04.2003" , "senthilkumar":"10.06.2003" , "arun prasad":"06.06.2003" , "kiran koumar":"01.03.2003" , "youvaraj":"17.08.2002"}
for i in range(0,10):
    flag=1
    name=input("Enter exit to quit..... \nEnter your name : ")
    if(name=="exit"):
        break
    dob=input("Enter your date of birth to find your twin ..... : ")
    for x,y in name_dob.items():
        indob=dob[0:6]
        aldob=y[0:6]
        if(aldob==indob):
            flag=0
            print("\n")
            print("_____________________________________________")
            print("\n")
            print("Name of your twin is "+x)
            print("\n")
            print("_____________________________________________")
            print("\n\n")
    if(flag==1):
        print("\n")
        print("_____________________________________________")
        print("\n")
        print("Sorry bro !!!!! you didn't have a twin !!!!!")
        print("\n")
        print("_____________________________________________")
        print("\n\n")
    name_dob[name]=dob;
print(name_dob)
    
    



