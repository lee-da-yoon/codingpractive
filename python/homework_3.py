sitename = input("사이트 주소를 입력하십시오.")

if sitename[0:7] == "http://" :
    password = sitename[7:]
    if password.find(".") != -1 :
        password = password[:password.index(".")]
        if len(password) <4 :
            print("사이트 주소가 너무 짧습니다.")
        else :
            password = password[:3] + str(len(password)) + str(password.count("e")) + "!"
            # 자른 후 남은 글자의 처음 세자리 + 글자 개수 + 글자 내 'e'의 개수 + !
            print("생성 완료. 비밀번호는 {0} 입니다.".format(password))
else :
    print(sitename+"는 올바르지 않은 주소입니다.") 


    