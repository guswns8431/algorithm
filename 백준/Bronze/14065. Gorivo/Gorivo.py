# Read miles per gallon from input
mpg = float(input())

# Constants
GALLON_TO_LITERS = 3.785411784
MILE_TO_METERS = 1609.344
METERS_TO_KM = 1/1000
KM_TO_100KM = 100

# Convert MPG to L/100km
# First convert miles to kilometers (1 mile = 1609.344 meters = 1.609344 km)
# Then convert gallons to liters (1 gallon = 3.785411784 liters)
# Then adjust to get liters per 100km

l_per_100km = (GALLON_TO_LITERS * KM_TO_100KM) / (mpg * MILE_TO_METERS * METERS_TO_KM)

# Print result
print(f"{l_per_100km}")