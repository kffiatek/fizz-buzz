print("Fizz-Buzz by kffiatek")

factors_of_interest = {3 : "Fizz", 5 : "Buzz"}

for i in range(1,101):
  result=""
  for factor in factors_of_interest:
    if (i % factor == 0): result=result+factors_of_interest[factor]
  if not result: result = i
  print(result)