# Long Contest 1, Problem K
def print_list(items):
	for item in items:
		print(item)
	
n = int(input())
rats = []
women_children = []
men = []
captains = []
while n > 0:
	n -= 1
	name, status = input().split()
	if status == 'rat':
		rats.append(name)
	elif status == 'woman' or status == 'child':
		women_children.append(name)
	elif status == 'man':
		men.append(name)
	elif status == 'captain':
		captains.append(name)
print_list(rats)
print_list(women_children)
print_list(men)
print_list(captains)