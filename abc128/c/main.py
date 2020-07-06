from itertools import product
n, m = map(int, input().split())
switches = []
for _ in range(m):
    k, *s = map(lambda x: int(x)-1, input().split())
    switches.append(s)
p = list(map(int, input().split()))

ans = 0
for subset in product((0, 1), repeat=n):
    for j in range(m):
        on_cnt = sum(subset[s] for s in switches[j])
        if on_cnt % 2 != p[j]:
            break
    else:
        ans += 1
print(ans)
