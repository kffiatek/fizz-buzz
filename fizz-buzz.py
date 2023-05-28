print("Fizz-Buzz by kffiatek")

factors_of_interest = {3 : "Fizz", 5 : "Buzz"}

for i in range(1,101):
  result=""
  player=i % 2
  for factor in factors_of_interest:
    if (i % factor == 0): result=result+factors_of_interest[factor]
  if not result: result = str(i)
  if not player: result = 10*(" ") + result
  print(result)