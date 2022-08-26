ip = input("Enter The IP Address: ")
lt = list(map (int, ip.split(".")))
for i in range(0,4):
    if(lt[i]>255 or lt[i]<0):
        print("INVALID IP ADDRESS")
        exit()
    if(lt[0]>=0 and lt[0]<128):
        print("Class of IP Address is A.\nNetwork Address: {}.0.0.0\nNetID: {}\nHost ID: {}.{}.{}".format(lt[0], lt[0], lt[1], lt[2], lt[3]))
    if(lt[0]>=128 and lt[0]<192):
        print("Class of IP Address is B.\nNetwork Address: {}.{}.0.0\nNetID: {}.{}\nHost ID: {}.{}".format(lt[0], lt[1], lt[0], lt[1], lt[2], lt[3]))
    if(lt[0]>=192 and lt[0]<224):
        print("Class of IP Address is C.\nNetwork Address: {}.{}.{}.0\nNetID: {}.{}.{}\nHost ID: {}".format(lt[0], lt[1], lt[2], lt[0], lt[1], lt[2], lt[3]))
    if(lt[0]>=224 and lt[0]<240):
        print("Class of IP Address is D.\nInformation is Reserved.")
    if(lt[0]>=240 and lt[0]<=255):
        print ("Class of IP Address is E.\nInformation is Reserved.")