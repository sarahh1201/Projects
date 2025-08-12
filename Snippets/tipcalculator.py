print("Tip Calculator!")
bill = float(input("How much was your bill? "))
tip = int(input("How much would you like to tip? (10,15,20 or 25): "))

while tip not in [10, 15, 20, 25]:
  tip = int(input("How much would you like to tip? (10,15,20 or 25): "))

people = int(input("How many people are splitting the bill? "))

tip_as_percent = tip / 100
tip_total = tip_as_percent*bill
total_bill = tip_total + bill
split = total_bill / people
  
print(f"Each person should pay ${round(split,3)}")
