from random import *

sigan = {1:1}
tabseung = {1:1}
for i in range (1,51) :
    sigan[i] = randint(5,50)
    if 5 <= sigan[i] <= 15 :
        tabseung[i] = "O"
    else :
        tabseung[i] = " "        
    print("[{2}] {0}번째 손님 (소요시간 : {1}분)".format(i,sigan[i],tabseung[i]) )
    
tt = str(tabseung.values())
print(tt.count("O")) 
