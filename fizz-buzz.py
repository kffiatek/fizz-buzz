print("Fizz-Buzz by kffiatek")

game_size = 100
factors_of_interest = {3 : "Fizz", 5 : "Buzz"}

for i in range(1,game_size+1):
  result=""
  player=i % 2
  for factor in factors_of_interest:
    if (i % factor == 0): 
      if result: result+="-"
      result+=factors_of_interest[factor]
  if not result: result = str(i)
  if not player: result = 10*(" ") + result
  print(result)