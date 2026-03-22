def std_weight(height, gender) : 
    if gender == "여자" :
        return height * height * 21 * 0.0001
    else :
        return height * height * 22 * 0.0001

height = 250
gender = "여자"
weight = std_weight(height,gender)
print("키 {}cm {}의 표준 체중은 {}kg입니다.".format(height,gender,round(weight,2)))