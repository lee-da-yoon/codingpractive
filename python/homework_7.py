for i in range(1,51) : 
    i주차보고 = open(f"{i}주차.txt","w",encoding="utf8")
    i주차보고.write('''- {} 주차 주간보고 - 
부서 : 
이름 : 
업무 요약 : '''.format(i))
    i주차보고.close()