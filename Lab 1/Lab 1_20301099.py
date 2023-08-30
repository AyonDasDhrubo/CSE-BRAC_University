open_file = open("CSE420_Lab1_input.txt", "r")
user_input = open_file.read().split()

keywords = [
  'auto', 'true', 'false', 'none', 'and', 'as', 'break', 'case', 'char',
  'const', 'continue', 'default', 'do', 'double', 'if', 'else', 'float', 'for',
  'goto', 'long', 'register', 'return', 'short', 'signed', 'sizeof', 'static',
  'struct', 'typedef', 'unsigned', 'void', 'volatile', 'while', 'int', 'float'
]

logical_operator = ['>', '>=', '<', '<=', '==', '!', '!=']

math_operator = ['+', '-', '*', '/', '=', '++', '--', '//', '**']

others = [',', ';', ':', '(', ')', '{', '}']

numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

keyword_store = []
logical_op_store = []
numbers_store = []
others_store = []
math_op_store = []
identifier = []

for i in range(len(user_input)):
  if user_input[i] in keywords and user_input[i] not in keyword_store:
    keyword_store.append(user_input[i])
  else:
    check_value = ""
    #print(check_value)
    for j in user_input[i]:
      if j in logical_operator:
        if j not in logical_op_store:
          logical_op_store.append(j)

        if check_value.isnumeric() or '.' in check_value:
          numbers_store.append(check_value)

        elif check_value in keywords and check_value not         in keyword_store:
          keyword_store.append(check_value)

        else:
          if check_value != '' and check_value not in identifier:
            identifier.append(check_value)
        check_value = ""

      elif j in math_operator:
        if j not in math_op_store:
          math_op_store.append(j)

        if check_value.isnumeric() or '.' in check_value:
          numbers_store.append(check_value)

        elif check_value in keywords and check_value not in keyword_store:
          keyword_store.append(check_value)

        else:
          if check_value != '' and check_value not in identifier:
            identifier.append(check_value)
        check_value = ""

      elif j in others:
        if j not in others_store:
          others_store.append(j)

        if check_value.isnumeric() or '.' in check_value:
          numbers_store.append(check_value)

        elif check_value in keywords and check_value not in keyword_store:
          keyword_store.append(check_value)

        else:
          if check_value != '' and check_value not in identifier:
            identifier.append(check_value)
        check_value = ""

      elif j in numbers or j.isalpha() or j == '.':
        check_value = check_value + j
        #print(check_value)

    if check_value.isnumeric() or '.' in check_value:
      
      numbers_store.append(check_value)

    elif check_value in keywords and check_value not in keyword_store:
      keyword_store.append(check_value)

    elif check_value in others and check_value not in others_store:
      others_store.append(check_value)

    else:
      if check_value != '' and check_value not in identifier:
        identifier.append(check_value)

print("Keywords: ", end='')
print(*keyword_store, sep=',')
print("Identifiers: ", end='')
print(*identifier, sep=',')
print("Math Operators: ", end='')
print(*math_op_store, sep=',')
print("Logical Operators: ", end='')
print(*logical_op_store, sep=',')
print("Numerical Values: ", end='')
print(*numbers_store, sep=',')
print("Others: ", end='')
print(*others_store)
