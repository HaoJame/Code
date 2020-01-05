n=int(input())
for i in range(n):
	a=int(input())
	array=[int(x) for x in input().split(' ')]
	array.sort()
	skill=array[1]-array[0]
	for j in range(1,len(array)-1):
		edit=array[j+1]-array[j]
		if edit < skill:
			skill = edit
	print(skill)