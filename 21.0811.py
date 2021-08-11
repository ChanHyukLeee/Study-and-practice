# Inspiring by https://www.kaggle.com/learn/python
# Learn python for project

# print and string example
print("That's \"cool\"") # backslash -> escaping single quote
hello = "hello\nworld"
print(hello) # \n means next line

print("hello", end='')
print("pluto", end='') # end='', in one line

claim = "Pluto is a planet!"
claim.index('plan')  # find text
words = claim.split() # split words
words = "/".join(words) #merge into "/" 

planet = pluto, position = 9
"{}, you'll always be the {}th planet to me.".format(planet, position) # format
