# Long Contest 1, Problem J
head = input()
text = input()

hm = {}
for ch in head:
	if ch == ' ':
		continue
	hm[ch] = hm.get(ch, 0)+1
tm = {}
for ch in text:
	if ch == ' ':
		continue
	tm[ch] = tm.get(ch, 0)+1

flag = True
for ch, tcount in tm.items():
	hcount = hm.get(ch, 0)
	if hcount == 0 or hcount < tcount:
		flag = False
		break
if flag:
	print('YES')
else:
	print('NO')
		
		