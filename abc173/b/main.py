ac = 0
wa = 0
tle = 0
re = 0

n = int(input())

for _ in range(n):
    result = input()
    if(result == "AC"):
        ac += 1
    if(result == "WA"):
        wa += 1
    if(result == "TLE"):
        tle += 1
    if(result == "RE"):
        re += 1

print("AC x {}".format(ac))
print("WA x {}".format(wa))
print("TLE x {}".format(tle))
print("RE x {}".format(re))
