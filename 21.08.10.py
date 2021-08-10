## Reference by https://www.kaggle.com/learn/python

# when you swap two thing
a = [1,2,3]
b = [3,2,1]

#using temp
temp = a
a = b
b = temp

# when function don't return, they express None
print(1,2,3, sep=' < ')

#round function
print(round(2122.456, 2)) # round to 2122.46
print(round(2122.456, -2)) # round to 2100.0

# remember ==
def is_odd(n):
    return (n % 2) == 1

bool(1) # True
bool(0) # False
bool("asf") # True, string is always True except empty

# imaginary part
x=12
print(x.imag)
c = 12 + 3j
print(c.imag)
x.bit_length()

# list method
planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
planets.append('Pluto') # adding item
planets.pop() # show last item
planets.index('Earth') # search 'Earth'
short_planets = [planet for planet in planets if len(planet) < 6]

res = [True, False, True]
print(res)

def elementwise_greater_than(L, thresh):
    """Return a list with the same length as L, where the value at index i is 
    True if L[i] is greater than thresh, and False otherwise.
    
    >>> elementwise_greater_than([1, 2, 3, 4], 2)
    [False, False, True, True]
    """
    return [ele > thresh for ele in L]

def menu_is_boring(meals):
    """Given a list of meals served over some period of time, return True if the
    same meal has ever been served two days in a row, and False otherwise.
    """
    for i in range(len(meals)-1):
        if meals[i] == meals[i+1]:
            return True
    return False

#Tuple method
t = (1,2,3) # or t = 1, 2, 3
# They cannot be modified
x = 0.125
x.as_integer_ratio() # (1,8)

