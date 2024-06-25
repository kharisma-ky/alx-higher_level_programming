#!/usr/bin/python3
def common_elements(set_1, set_2):
       common_set = set_1 & set_2
    return common_set

4. 4-only_diff_elements.py
#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
       diff_set = set_1 ^ set_2
    return diff_set

5. 5-number_keys.py
#!/usr/bin/python3
my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4}


result = number_keys(my_dict)


print(result)  # Output: 4 (since there are 4 keys in the dictionary my_dict)
