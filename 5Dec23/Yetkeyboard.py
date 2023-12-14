def f(s):
    ans = ""
    cap = 0
    small = 0
    index_cap=[]
    index_small=[]
    # iterate the string s
    for i in range(len(s)):
        if s[i] == 'b':
            if small != 0:
                # remove the last lowercase letter of the string ans . if no lowercase, just pass
                for j in range(len(ans) - 1, -1, -1):
                    if 'a' <= ans[j] <= 'z':
                        ans = ans[:j] + ans[j+1:]
                        # decrease small
                        small -= 1
                        #now if any index in index_small is greater than j, decrease it by 1
                        
                        #start from the last index of index_small . if index comes out to be less than j , break
                        for k in range(len(index_small)-1,-1,-1):
                            if index_small[k]>j:
                                index_small[k]-=1
                            else:
                                break
                        #remove the last index from index_small
                        del index_small[-1]
                       
                        #now if any index in index_cap is greater than j, decrease it by 1

                        #start from the last index of index_cap . if index comes out to be less than j , break
                        for k in range(len(index_cap)-1,-1,-1):
                            if index_cap[k]>j:
                                index_cap[k]-=1
                            else:
                                break
                        #remove the last index from index_cap
                        del index_cap[-1]

                        
                        break
        elif s[i] == 'B':
            if cap != 0:
                # remove the last uppercase letter of the string ans . if no uppercase, just pass
                for j in range(len(ans) - 1, -1, -1):
                    if 'A' <= ans[j] <= 'Z':
                        ans = ans[:j] + ans[j+1:]
                        # decrease cap
                        cap -= 1
                        break
        else:
            ans += s[i]
            # if the letter is uppercase, increase cap
            if 'A' <= s[i] <= 'Z':
                cap += 1
                #add the index in index_cap
                index_cap.append(i)

            # if the letter is lowercase, increase small
            if 'a' <= s[i] <= 'z':
                small += 1
                #add the index in index_small
                index_small.append(i)

    return ans


t = int(input())
for _ in range(t):
    s = input()
    print(f(s))