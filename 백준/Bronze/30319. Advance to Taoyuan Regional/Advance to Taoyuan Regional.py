from datetime import datetime, timedelta

# Read input date string
input_date = input()

# Convert input string to datetime object
contest_date = datetime.strptime(input_date, "%Y-%m-%d")

# ICPC Taoyuan Regional Contest date (October 21, 2023)
regional_date = datetime(2023, 10, 21)

# Calculate the difference between regional date and contest date
days_before = regional_date - contest_date

# If contest date is at least 35 days before regional date, it's GOOD
# Otherwise, it's TOO LATE
if days_before.days >= 35:
    print("GOOD")
else:
    print("TOO LATE")