k = input()
s = raw_input()
ans = []
cur = ""
used = set()
for i in range(len(s)):
    if s[i] not in used:
        if len(cur) > 0:
            ans.append(cur)
        cur = ""
        cur += s[i]
        used.add(s[i])
    else:
        cur += s[i]
ans.append(cur)
if len(ans) < k:
    print("NO")
else:
    print("YES")
    for i in range(k, len(ans)):
        ans[k - 1] += ans[i]
    for i in range(k):
        print(ans[i])