m = int(input())
while m > 0:
    n = int(input())
    operations = ["*", "+", "-", "//"]
    possible = False
    for op1 in operations:
        if possible:
            break
        for op2 in operations:
            if possible:
                break
            for op3 in operations:
                exp = "4 " + op1 + " 4 " + op2
                exp += " 4 " + op3 + " 4"
                if eval(exp) == n:
                    possible = True
                    exp = exp.replace("//", "/")
                    print(exp, "=", n)
                    break
    if not possible:
        print("no solution")
    m -= 1

