def solve(number):
    operations = ["*", "+", "-", "//"]
    for op1 in operations:
        for op2 in operations:
            for op3 in operations:
                exp = "4 {} 4 {} 4 {} 4".format(op1, op2, op3)
                if eval(exp) == number:
                    exp = exp.replace("//", "/")
                    return "{} = {}".format(exp, number)


m = int(input())
while m > 0:
    n = int(input())
    answer = solve(n)
    if answer is None:
        print("no solution")
    else:
        print(answer)
    m -= 1
