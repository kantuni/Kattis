import math


def find_angle_using_three_sides(a, b, c):
    """Using law of cosines, finds the angle between the sides `a` and `b`."""
    return math.degrees(math.acos((a ** 2 + b ** 2 - c ** 2) / (2 * a * b)))


def dist(p, q):
    """Calculates the distance between two points."""
    return math.sqrt(sum((pi - qi) ** 2 for pi, qi in zip(p, q)))


t = int(input())
for _ in range(t):
    r, n = map(int, input().split())

    coords = []
    for _ in range(n):
        x, y = map(int, input().split())
        coords.append((x, y))

    sum_of_arc_lengths = 0
    original_length = 0
    for i in range(n):
        p1, p2, p3 = coords[i], coords[(i + 1) % n], coords[(i + 2) % n]
        a, b, c = dist(p1, p2), dist(p2, p3), dist(p3, p1)
        original_length += a + b
        # `beta` is the angle between side `a` and side `b`
        beta = find_angle_using_three_sides(a, b, c)
        # `alpha` + `beta` + 180 (two angles created by perpendiculars) = 360
        alpha = 180 - beta
        circumference = 2 * math.pi * r
        arc_length = circumference * (alpha / 360)
        sum_of_arc_lengths += arc_length

    # As we counted each side twice, we need to divide the original length by 2
    original_length /= 2

    if original_length <= sum_of_arc_lengths:
        print("Not possible")
        continue

    scale = (original_length - sum_of_arc_lengths) / original_length
    print(round(scale, 6))
