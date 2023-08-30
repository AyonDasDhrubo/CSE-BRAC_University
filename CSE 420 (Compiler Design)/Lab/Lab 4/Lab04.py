s = []
rule_table = {"id" : {"E" : "TE'", "T" : "FT'", "F" : "id"},
       "+" : {"E'" : "+TE'","T'" : "epsilon"},
       "*": {"T'" : "*FT'"},
       "(": {"E" : "TE'", "T" : "FT'", "F" : "(E)"},
       ")": {"E'": "epsilon", "T'" : "epsilon"},
       "$": {"E'" : "epsilon", "T'" : "epsilon"}
       }

input = "id + id * id"
temp = ""
input = input + " $"
input = input.split(" ")
s.append("$")
s.append("E")
index = 0
i = input[index]

print(f"{temp} {s[::-1]} {input[index:]}")

while len(input) != 0:
        check = rule_table[i]
        #print(check)
        value = s.pop()
        #print(value)
        rule = check[value]
        #print(rule)

        if "id" in rule:
            s.append("id")
        
        elif rule == "epsilon":
            pass

        else:
            flag = 0
            for j in rule[::-1]:
                #print(j)
                if j == "'":
                    flag = 1
                elif flag == 1:
                    s.append(j + "'")
                    flag = 0
                else:
                    s.append(j)
        print(f"{temp} {s[::-1]} {input[index:]} {value} {rule}")

        if s[-1] == "$" and i == "$":
            break

        if s[-1] == i:
            s.pop()
            temp += i
            index += 1
            print(f"{temp} {s[::-1]} {input[index:]} {i}")
            i = input[index]