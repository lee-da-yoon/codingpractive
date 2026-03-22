from random import *
rangenum = int(input("아이디가 몇번까지 있나요?"))
rangenum +=1
id = list(range(1,rangenum))
shuffle(id)
chicken = sample(id,1)
# print(id,chicken)

id.remove(chicken[0])
# print(id)

coffee = sample(id,3)
# print(coffee)

print('''-- 당첨자 발표 --
치킨 당첨자 : {0}
커피 당첨자 : {1}
-- 축하합니다 --'''.format((chicken),(coffee)))