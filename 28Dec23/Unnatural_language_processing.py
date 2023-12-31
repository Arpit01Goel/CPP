t=int(input())
mp={'ba','be','ca','ce','da','de'}
for i in range(t):
	n=int(input())
	s=input()
	ans=''
	for j in range(len(s)):
		if s[j:j+2] in mp:
			ans+="."
		ans+=s[j]
	print(ans[1::])