n, c = map(int, input().split())

total_minute = 0
total_second = 0
total_hour = 0
for _ in range(n):
    minute, second = map(int, input().split(':'))
    total_minute += minute
    total_second += second
total_minute += (total_second - c * (n - 1)) // 60
total_second = (total_second - c * (n - 1)) % 60
total_hour = total_minute // 60
total_minute = total_minute % 60

print(f'{total_hour:02d}:{total_minute:02d}:{total_second:02d}')