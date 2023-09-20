import random

user_input = input("Input your Student ID: ")
user_input = user_input.replace("0", "8")
min_value = int(user_input[4])
shuffle_num = int(user_input[3])
win_point = user_input[-1:-3:-1]
target = int(round(float(win_point) * 1.5))

random_number_store = []
for i in range(8):
  random_number_store.append(random.randint(min_value, target))
  
print(
    "Generated 8 random points between the minimum and maximum point limits: ",
    random_number_store)
print("Total points to win: ", win_point)


def alpha_beta_pruning(depth, index, points, alpha, beta, max_min):
  if depth == 3:
    return points[index]

  if max_min:
    value = -1000
    for i in range(0, 2):
      node_value = alpha_beta_pruning(depth + 1, index * 2 + i, points, alpha, beta, False)
      #call min
      value = max(value, node_value)
      alpha = max(alpha, value)
      if alpha >= beta:
        break
    return value

  else:
    value = 1000
    for i in range(0, 2):
      node_value = alpha_beta_pruning(depth + 1, index * 2 + i, points, alpha, beta, True)
      #call max
      value = min(value, node_value)
      beta = min(beta, value)
      if alpha >= beta:
        break
    return value


print("Achieved point by applying alpha-beta pruning =",
      alpha_beta_pruning(0, 0, random_number_store, -1000, 1000, True))
if alpha_beta_pruning(0, 0, random_number_store, -1000, 1000, True) >= int(win_point):
  print("The winner is Optimus Prime\n")
else:
  print("The winner is Megatron\n")

print("After the shuffle: ")
after_shuffle = []
win_count = 0
for i in range(shuffle_num):
  random.shuffle(random_number_store)
  after_shuffle.append(
      alpha_beta_pruning(0, 0, random_number_store, -1000, 1000, True))
  if alpha_beta_pruning(0, 0, random_number_store, -1000, 1000, True) >= int(win_point):
      win_count += 1
        
print("List of all points values from each shuffle: ", after_shuffle)
print("The maximum value of all shuffles: ", max(after_shuffle))
print("Won", win_count, "times out of", shuffle_num, "number of shuffles")
