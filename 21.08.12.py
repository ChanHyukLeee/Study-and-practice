def word_search(documents, keyword):
    keyword = keyword.lower()
    indice = []
    num = -1
    for i, doc in documents:
        tokens = i.split()
        num += 1
        normalized = [token.strip(',.').lower() for token in tokens]
        if keyword in normalized:
            indice.append(num)
        
    return indice

def multi_word_search(doc_list, keywords):

    ans = {}
    for word in keywords:
        answer={word : word_search(doc_list, word)}
        ans.update(answer) # update for dictionary
    return ans
# or using dictionary definition
def multi_word_search(documents, keywords):
    keyword_to_indices = {}
    for keyword in keywords:
        keyword_to_indices[keyword] = word_search(documents, keyword)
    return keyword_to_indices

# when imports something and don't know
import numpy
rolls = numpy.random.randint(low=1, high=6, size=10)
type(rolls) # type
print(dir(rolls))#what can I do
rolls.mean() # mean value
help(rolls.ravel) # show the meaning

def blackjack_hand_greater_than(hand_1, hand_2):
    """
    Return True if hand_1 beats hand_2, and False otherwise.
    
    In order for hand_1 to beat hand_2 the following must be true:
    - The total of hand_1 must not exceed 21
    - The total of hand_1 must exceed the total of hand_2 OR hand_2's total must exceed 21
    
    Hands are represented as a list of cards. Each card is represented by a string.
    
    When adding up a hand's total, cards with numbers count for that many points. Face
    cards ('J', 'Q', and 'K') are worth 10 points. 'A' can count for 1 or 11.
    
    When determining a hand's total, you should try to count aces in the way that 
    maximizes the hand's total without going over 21. e.g. the total of ['A', 'A', '9'] is 21,
    the total of ['A', 'A', '9', '3'] is 14.
    
    Examples:
    >>> blackjack_hand_greater_than(['K'], ['3', '4'])
    True
    >>> blackjack_hand_greater_than(['K'], ['10'])
    False
    >>> blackjack_hand_greater_than(['K', 'K', '2'], ['3'])
    False
    """
    num1 =0
    num2 =0
    aces1 = 0
    aces2 = 0
    for i in hand_1:
        if i in ['J', 'Q', 'K']:
            num1 += 10
        elif i == 'A':
            aces1 += 1            
        else:
            num1 += int(i)
    num1 += aces1
    while num1 + 10 <= 21 and aces1>0 :
        num1 += 10
        aces1 -= 1
    
    for i in hand_2:
        if i in ['J', 'Q', 'K']:
            num2 += 10
        elif i == 'A':
            aces2 +=1
        else:
            num2 += int(i)
            
    num2 += aces2
    
    while num2 + 10 <= 21 and aces2 >0:
        num2 += 10
        aces2 -= 1
        
    return (num1 <= 21) and (num1 >= num2 or num2>21)

# using helper function is easier to use
hand_1=['J', 'A', 'A', '2']
hand_2=['9', '6', 'K', 'A', '5', 'J']
print(blackjack_hand_greater_than(hand_1, hand_2))

# finish kaggle python tutorial!