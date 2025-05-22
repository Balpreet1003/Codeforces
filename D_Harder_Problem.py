def solve():
    n, a = int(input()), list(map(int, input().split()))
    s, u = set(), set(range(1, n + 1))
    b = [a[-1] if a[0] == n and sum(a) == n + t else a[0]]
    u.remove(b[0])
    s.add(b[0])
    for x in a[1:]:
        b.append(u.pop() if x in s else x)
        s.add(b[-1])
        u.discard(x)
    print(*b)
for t in range(int(input())):
    solve()