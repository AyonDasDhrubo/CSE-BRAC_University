import numpy as np

batsman_number = int(input())
target = int(input())
batsman = []
batsman_run = []
for i in range(batsman_number):
    x, y = input().split()
    batsman.append(x)
    batsman_run.append(int(y))
print(batsman)


def selection(population, fit):   #selection from population
    run_sum = np.sum(fit)
    check = np.arange(len(population))
    probability = fit / run_sum
    value = np.random.choice(check, 2, replace = True, p = probability)
    return value


def fitness(population, num):
    fitness_check = np.zeros(len(population))
    for i in range(len(population)):
        for j in range(num):
            if population[i][j] == 1:
                fitness_check[i] += batsman_run[j]
    return fitness_check


def crossover(one, two):
    value_size = len(one)
    index = np.random.randint(0, value_size)
    cross_value = np.append(one[:index], two[index:])
    return cross_value

def mutation(child, mu_threshold):
    for i in range(len(child)):
        if np.random.random() <= mu_threshold:
            child[i] = 1 - child[i]
    return child #after mutation

def genetic_algo(population, n, mu_threshold):
    count = 1
    while count <= 500:
        count += 1
        next_generation = np.zeros((len(population), n))
        for i in range(len(population) // 2):
            one, two = selection(population, fitness(population, n))
            crossover_value = crossover(population[one], population[two])
            mutation_value = mutation(crossover_value, mu_threshold)
            next_generation[i] = mutation_value
        population = next_generation
        fit_value = fitness(population, n)
        lower_value = target - 50
        upper_value = target + 50
        if lower_value < np.max(fit_value) < upper_value:
            if np.max(fit_value) == target:
                output = ""
                for i in population[np.argmax(fit_value)]:
                    output += str(int(i))
                return output
    return -1

initial_population = 8
mu_threshold = 0.03
population = np.random.randint(0, 2, (initial_population, batsman_number))
print(genetic_algo(population, batsman_number, mu_threshold))

