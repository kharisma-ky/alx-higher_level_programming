#!/usr/bin/python3
def best_score(a_dictionary):
   
    max_score = float('-inf')  # Initialize to negative infinity to handle negative values correctly
    best_key = None
    
       for key, value in a_dictionary.items():
        if value > max_score:
            max_score = value
            best_key = key
    
    return best_key
