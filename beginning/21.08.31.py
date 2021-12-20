def convert_to_decimal(number, base):
    multiplier, result = 1,0
    while number > 0:
        result += number % 10 * multiplier # number을 10으로 나눈 나머지에 multiplier 곱하기
        multiplier *= base # base의 증가 
        number = number // 10 # number을 10으로 나눈 몫
    return result

def convert_from_decimal(number, base):
    multiplier, result = 1, 0
    while number > 0:
        result += number % base * multiplier
        multiplier *= 10
        number = number // base
    return result

def convert_from_decimal_larger_base(number, base):
    strings = "0123456789ABCDEF"
    result = []
    result_calculation = ""
    while number > 0:
        digit = number % base
        result.append(strings[digit])
        result.reverse()
        number = number // base
        # 책에서는 result = strings[digit] + result 사용
    for i in range(len(result)):
        result_calculation += result[i]
    return result_calculation

def convert_any_other_base(number, base):
    strings = "0123456789ABCDEF"
    if (number < base):
        num

if __name__ == "__main__":
    # print(convert_to_decimal(111111, 2))
    # print(convert_from_decimal(63, 4))
    print(convert_from_decimal_larger_base(1111, 15))